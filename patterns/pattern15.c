#include <stdio.h>

void pattern(int n){
    for(int i=0;i<n;i++){
        for(char j ='A';j<='A'+(n-i-1);j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}

int main(){
    int n =5;
    pattern(n);
    return 0;
}

