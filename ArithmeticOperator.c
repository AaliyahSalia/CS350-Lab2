// Display arithmetic operator using switch case.

// Output:
// enter two numbers: 8   4
// enter 1 for sum
// 2 for multiply
// 3 for subtraction
// 4 for division: 1

// sum=12

// Notice that “1” is your input from keyboard


#include <stdio.h>

int main(void){ //starts the main function of the program. 
    int a, b, c;  //declares three integer variables, a, b, and c. 
    printf("enter two numbers: \n"); //Displays message on the screen.
    scanf("%d %d", &a, &b); //function to read two integers from the user which will then be stored in the variables a, b.
    printf("enter 1 for sum \n"); //displays message.
    printf("2 for multiply\n"); //displayes message.
    printf("3 for subtraction\n"); //displays message.
    printf("4 for division: \n"); //displays message.
    scanf("%d", &c); //reads an integer from the user, which is stored in variable c.

    switch(c){ //starts a switch statement which is sued to perform different actions based on the value of the variable 'c'.
        case 1:  //case block for the value 1. 
            printf("sum=%d \n", a+b); //displays the sum of 'a' and 'b'. 
            break; //ends the case block for the value 1 and causes the program to exit the switch statement.
        case 2: //case block for the value 2
            printf("multiply=%d \n", a*b); //displays the multiplication for 'a' and 'b'.
            break; //ends the case block for the value 1 and causes the program to exit the switch statement.
        case 3:
            printf("subtraction=%d \n", a-b); //displays the substraction of 'a' and 'b'. 
            break; //ends the case block for the value 1 and causes the program to exit the switch statement.
        case 4:
            printf("division=%d \n", a/b); //displays the division of 'a' and 'b'. 
            break; //ends the case block for the value 1 and causes the program to exit the switch statement.
        default:
            printf("Invalid input"); //displays message if the user inputs an invalid choice.
            break; //ends the case block for the value 1 and causes the program to exit the switch statement.
    }

    return 0; //returns statement of the main function. Indicates that program has been completed successfully. 

}

