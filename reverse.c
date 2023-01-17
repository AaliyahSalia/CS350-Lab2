//Assuming that the input number is a positive integer:
//The program takes an integer as an input and returns the reversed number.
//For example, if the user enters 123, the program will return 321.
//If the input number is negative, we have take into account adding some validation to the input and also handle the negative sign.

#include <stdio.h>

int reverse_number(int num) { //takes an integer as an input and returns the reversed number. 
    int reversed = 0;
    while (num != 0) { //a while loop is used to iterate through each digit of the number, starting from the least significant digit. 
        reversed = reversed * 10 + num % 10; //For each digit, it is added to a new variable 'reversed' multiplied by 10. The original number is then divided by 10 to remove the last digit
        num /= 10; //The original number is then divided by 10 to remove the last digit. 
    }
    return reversed;
}

int main() {
    int num;
    printf("Enter a number: "); //the user is prompted to enter a number, which is then passed to the reverse_number() function.
    scanf("%d", &num); //the result is stored in a new variable
    printf("The reversed number is: %d", reverse_number(num)); //the reversed number is printed on the monitor.
    return 0;
}
