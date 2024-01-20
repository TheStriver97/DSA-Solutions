#include <stdio.h>
int main(){
    //initializing a variable N to iterate the loop N number of times
    int N = -5;
    //the outer for loop with variable i controls the number of columns
    if (N<0)
    {printf("N should be a valid positive integer only.\n");
    return 1;}
    else
    {for (int i=1;i<N;i++){
        //the inner for loop with variable j controls the number being printed in each row, which increases by 1 in every iteration and stops as the value of j equates to the value of the outer loop's variable i.
        for(int j = 1;j<=i;j++){
            //printing the value of variable j for showing an output on console
            printf("%d",j);
        } 
        // to enter a new line as the loop completes one iteration.
        printf("\n");
    }
    }
    return 0;
}