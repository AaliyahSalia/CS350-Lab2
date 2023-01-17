// Find that entered year is leap year or not
// [hint] In the Gregorian calendar three criteria must be taken into account to identify leap 
// years:
// - The year can be evenly divided by 4;
// - If the year can be evenly divided by 100, it is NOT a leap year, unless;
// - The year is also evenly divisible by 400. Then it is a leap year.

#include <stdio.h>
int main(void){

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                printf("%d is a leap year.", year);
            }
            else{
                printf("%d is not a leap year.", year);
            }
        }
        else{
            printf("%d is a leap year.", year);
        }
    }
    else{
        printf("%d is not a leap year.", year);
    }
    return 0;
}



