#include  <stdio.h>

void pattern(int n){
    int space = 2*(n-1);
for(int i=1;i<=n;i++){
//numbers
    for(int j =1;j<=i;j++){
        printf("%d", j);
    }
//space
for(int j =1;j<=space;j++){
    printf(" ");
}

//numbers
    for(int j =i;j>=1;j--){
        printf("%d", j);
    }
    printf("\n");
    space -=2;
}
}

int main(){
    int n =4;
    pattern(n);
    return 0;
}
