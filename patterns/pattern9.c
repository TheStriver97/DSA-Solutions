#include <stdio.h>

void patterna(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf("\n");
    }
}

void patternb(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j =0;j<2*n-(2*i+1);j++){
            printf("*");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }

        printf("\n");
    }

}

int main(){
    int n =5;
    patterna(n);
    patternb(n);
    return 0;
}