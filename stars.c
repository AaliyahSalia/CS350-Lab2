#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: "); //prompts the user to enter the number of rows
    scanf("%d", &n); //reads the input from user and stores in variable 'n'.

    for (int i = 1; i <= n; i++) { // outer loop to iterate through rows
        for (int j = 1; j <= n - i; j++) { // inner loop to print spaces in the beginning of each row
            printf(" ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++) { // inner loop to print '*' in each row
            printf("*");
        }

        printf("\n");  // move to next line
    }

    for (int i = n - 1; i >= 1; i--) {   // outer loop to iterate through rows in reverse
        for (int j = 1; j <= n - i; j++) { // inner loop to print spaces in the beginning of each row
            printf(" ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++) { // inner loop to print '*' in each row
            printf("*");
        }

        printf("\n"); // move to next line
    }
    return 0;
}
