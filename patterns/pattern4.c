#include <stdio.h>


void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    };
};

int main(){
    int n =5;
    pattern(n);
    return 0;
}