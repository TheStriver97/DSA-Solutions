/*This is not included in striver's list but am doing it anyways.*/

#include <stdio.h>
int main(){
    int i,j,n;
    n=5;

    for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j =1;j<=n;j++){
            if(i==1|| i==n||j==1||j==n)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
        return 0;

}