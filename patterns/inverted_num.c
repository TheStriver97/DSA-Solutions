#include <stdio.h>

void printNumberTriangle(int numRows) {
    // Outer loop controls the rows of the triangle
    for (int row = 0; row < numRows; row++) {
        // Inner loop controls the columns within each row
        for (int column = numRows; column > row; column--) {
            // Calculate and print the number for each column
            int currentNumber = numRows - column + 1;
            printf("%d", currentNumber);
        }
        // Move to the next line after printing the numbers for a row
        printf("\n");
    }
}

int main() {
    // Set the number of rows for the triangle
    int numRows = 5;
    // Call the function to print the number triangle
    printNumberTriangle(numRows);

    return 0;
}
