#include <stdio.h>
void pattern7( int n){
    // The outer loop which will iterate for the rows.
    for(int i =0; i<n;i++)
    {
        //This loop will print space before stars in each row.
        for(int j =0;j<n-i-1;j++)
        {
            printf(" ");    
        }
        //This loop will print stars in each row.
        for (int j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        //As one iteration of the outer for loop completes, the \n will shift to a new line.
        printf("\n");
        
    }
}
void pattern8(int n)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<i; j++)
        {
            printf(" ");
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*n -(2*i +1);j++){
            
            printf("*");
        }
        
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        printf("\n");
    }
}


int main(){
    //Initializing the variable.
    int n =  5;
    //calling the function with the variable n
    pattern7(n);
    pattern8(n);
    return 0;
}
