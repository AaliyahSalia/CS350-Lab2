//Find greatest in 3 numbers 
//Output: enter value for a, b& c: 5  7  4 => b is greatest

#include <stdio.h>

int main(void){
    int a, b, c;
    printf("Enter value for a, b & c: "); //prompts the user to enter the values of a, b, and c
    scanf("%d %d %d", &a, &b, &c); //reads the input from user and stores in variable 'a', 'b', 'c'
    if (a > b && a > c){ //checks if a is greater than b and c
        printf("a is greatest"); //displays message if a is greater.
    }
    else if (b > a && b > c){ //checks if b is greater than a and c
        printf("b is greatest"); //displays message if b is greater.
    }
    else{
        printf("c is greatest"); //if none of above conditions are true then it means c is the greatest.
    }
    return 0;
}

