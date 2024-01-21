#include <stdio.h>
int main(){
    //initializing a variable N to iterate the loop N number of times
    int N = 5;
    //the outer for loop with variable i controls the number of columns
    for (int i=0; i<N; i++){
        //the inner for loop with variable j controls the number of "*"s in each row, which increases by 1 in every iteration.
        for(int j=N; j>i; j--){
            //printing the "*"s for showing an output on console
            printf("*");
        } 
        // to enter a new line as the loop completes one iteration.
        printf("\n");
    }
    return 0;
}