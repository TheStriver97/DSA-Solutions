#include <stdio.h>

// Function to print a rectangular pattern of stars
void pattern1(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // This is the inner loop which here, loops for the columns
        // as we have to print a rectangular pattern.
        for (int j = 0; j < N; j++)
        {
            printf("* ");
        }

        // As soon as N stars are printed, we move to the
        // next row and give a line break; otherwise, all stars
        // would get printed in 1 line.
        printf("\n");
    }
}

int main()
{
    // Here, we have taken the value of N as 4.
    // We can also take input from the user.
    int N = 4;

    // Call the pattern1 function with N as an argument
    pattern1(N);

    return 0;
}

