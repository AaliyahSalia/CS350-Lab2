// Find that entered year is leap year or not
// [hint] In the Gregorian calendar three criteria must be taken into account to identify leap 
// years:
// - The year can be evenly divided by 4;
// - If the year can be evenly divided by 100, it is NOT a leap year, unless;
// - The year is also evenly divisible by 400. Then it is a leap year.

#include <stdio.h>
int main(void){

    int year;
    printf("Enter a year: "); // prompts the user to enter a year
    scanf("%d", &year);  // reads the input from user and stores in variable 'year'

    if (year % 4 == 0){ // checks if the year is divisible by 4
        if (year % 100 == 0){ // if it is divisible by 4, it checks if it's divisible by 100
            if (year % 400 == 0){ // if it's divisible by 100, it checks if it's divisible by 400
                printf("%d is a leap year.", year); // if it's divisible by 400 it is a leap year
            }
            else{
                printf("%d is not a leap year.", year); // if it's not divisible by 400 it is not a leap year
            }
        }
        else{
            printf("%d is a leap year.", year); // if it's not divisible by 100 it is a leap year
        }
    }
    else{
        printf("%d is not a leap year.", year); // if it's not divisible by 4 it is not a leap year
    }
    return 0;
}



