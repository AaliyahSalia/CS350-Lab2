#include <stdio.h>

int main(void){
    int num;
    printf("Enter a number: "); //prompts the user to enter a number
    scanf("%d", &num); //reads the input from user and stores it in the variable 'num'.
    if (num % 2 == 0){ //checks if the number is divisible by 2.
        printf("%d is even", num); //displays message if it's divisible by 2.
    }
    else{
        printf("%d is odd", num); //displays message if it's not divisible by 2, then it's odd.
    }
    return 0;
}

