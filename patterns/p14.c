#include <stdio.h>
void pattern14(int n) {
    for (int i = 0;i<n;i++){
        for (char ch  = 'A'; ch <='A'+i;ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }

}

int main(){
    int n =10;
    pattern14(n);
    return 0;
}