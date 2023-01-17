//Swap two numbers without using third variable avoiding overflow issue?

#include <stdio.h>

int main()
{
    int a, b; //Declare two integer variables, 'a' and 'b'
    printf("Enter two numbers: "); // Prompt the user to enter two numbers
    scanf("%d %d", &a, &b); // Read the two numbers from the user and store them in 'a' and 'b'
    printf("Before swapping: a = %d, b = %d ", a, b); //Print the values of 'a' and 'b' before swapping
    a = a + b; //Perform the swapping by adding 'a' and 'b' and storing the result in 'a'
    b = a - b; //Subtracting the original value of 'b' from the new value of 'a' and storing it in 'b'
    a = a - b; //Subtracting the new value of 'b' from the new value of 'a' and storing it in 'a'
    printf("After swapping: a = %d, b = %d ", a, b); //Print the values of 'a' and 'b' after swapping
    return 0; //Return 0 to indicate successful execution of the program
}

