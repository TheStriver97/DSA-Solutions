#include <stdio.h>
void pattern15(int n){
    for (int i = 0;i<n;i++){
        for(char ch = 'A';ch<='A'+(n-i-1);ch++){
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main(){
    int n =5;
    pattern15(n);
    return 0;
}