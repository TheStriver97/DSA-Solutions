#include <stdio.h>
void pattern10(int n)
{
    for (int i = 1;i<=2*n-1;i++)
    {
        // adding stars variable to change iteration after a point in the loop
        int stars =i;
        //if the value of rows increases than the input, then change the value of stars variable.
        if (i>n) stars = 2*n-i;
        //iterating the value of j on basis of stars variable
        for (int j = 1;j<=stars;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n = 5;
    pattern10(n);
    return 0;
}
