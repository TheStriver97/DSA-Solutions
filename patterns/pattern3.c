#include <stdio.h>

void pattern(int n){
    for(int i=1;i<=n;i++){
        for (int j =1;j<=i;j++){
            printf("%d ", j);
        };
    printf("\n");
    };
};
int main(){
int n = 6;
pattern(n);
return 0;
}