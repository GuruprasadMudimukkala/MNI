#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows (you can adjust this as needed)

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= (rows - i); j++) {
            printf("  ");  // Two spaces for each space
        }

        // Print stars with a space in between
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
