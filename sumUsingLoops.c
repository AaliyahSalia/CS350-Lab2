// Input a number, such as n from keyboard and display their sum from 1 to n by using loops 

// Output:
// enter a number: 10

// 	sum = 55

// 	notice that 55 = 1+2+3+4+5+6+7+8+9+10

#include <stdio.h>

int main(void){
    int n, i, sum=0; 
    printf("enter a number: "); //prompts the user to enter a number
    scanf("%d", &n); //reads the input from user and stores in variable 'n'.
    for(i=1; i<=n; i++){  // loop to iterate through numbers
        sum += i;  // add each number to the sum
    }
    printf("sum = %d", sum); // print the sum of numbers
 
    return 0;
}


