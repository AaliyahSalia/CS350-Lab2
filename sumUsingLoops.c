// Input a number, such as n from keyboard and display their sum from 1 to n by using loops 

// Output:
// enter a number: 10

// 	sum = 55

// 	notice that 55 = 1+2+3+4+5+6+7+8+9+10

#include <stdio.h>

int main(void){
    int n, i, sum=0;
    printf("enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum += i;
    }
    printf("sum = %d", sum);

    return 0;
}


