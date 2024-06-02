#include <stdio.h>

void pattern(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}


int main(){
    int n =6;
    pattern(n);
    return 0;
}