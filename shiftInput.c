// Shift input data by three bits to the left

// Output:

// Read the integer from keyboard: 2
// The left shifted data is = 16


#include <stdio.h>

int main(void){
    int data, result;
    printf("Read the integer from keyboard: ");
    scanf("%d", &data);
    result = data << 3;
    printf("The left shifted data is = %d", result);

    return 0;
}

