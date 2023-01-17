//Find greatest in 3 numbers 
//Output: enter value for a, b& c: 5  7  4 => b is greatest

#include <stdio.h>

int main(void){
    int a, b, c;
    printf("Enter value for a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c){
        printf("a is greatest");
    }
    else if (b > a && b > c){
        printf("b is greatest");
    }
    else{
        printf("c is greatest");
    }
    return 0;
}

