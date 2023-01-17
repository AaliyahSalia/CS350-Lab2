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

int main(void){
    int a, b, c;
    printf("enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("enter 1 for sum \n");
    printf("2 for multiply\n");
    printf("3 for subtraction\n");
    printf("4 for division: \n");
    scanf("%d", &c);

    switch(c){
        case 1:
            printf("sum=%d \n", a+b);
            break;
        case 2:
            printf("multiply=%d \n", a*b);
            break;
        case 3:
            printf("subtraction=%d \n", a-b);
            break;
        case 4:
            printf("division=%d \n", a/b);
            break;
        default:
            printf("Invalid input");
            break;
    }

    return 0;

}

