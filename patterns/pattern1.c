#include <stdio.h>
// Function to print a rectangular pattern of stars
    void pattern(int n) {
        //The outer loop which will loop for the rows;
        for(int i =0;i<n;i++){
            //This is the inner loop which here, loops for the columns.
            for(int j =0;j<n;j++){
                printf("*");
            }
            /*As soon as N stars are printed, we move to the next row*/
            printf("\n");
        }
    };
int main()
{
    //Here we take value of N as 4;
    int n =4;
    //calling the function with n as an argument
    pattern(n);

return 0;
}