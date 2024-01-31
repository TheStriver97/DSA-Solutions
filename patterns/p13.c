#include <stdio.h>
void pattern13(int n){
    int num =1;
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

}

int main(){
    int n = 5;
    pattern13(n);
    return 0;
}