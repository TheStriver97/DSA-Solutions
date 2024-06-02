#include <stdio.h>

void pattern(int n){
    for(int i =0;i<n;i++){
        for(int j=n;j>i;j--){
            printf("*");
        };
        printf("\n");

    }
}

int main(){
    int n =5;
    pattern(n);
    return 0;
}