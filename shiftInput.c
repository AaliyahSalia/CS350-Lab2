// Shift input data by three bits to the left

// Output:

// Read the integer from keyboard: 2
// The left shifted data is = 16


#include <stdio.h>

int main(void){ 
    int data, result;
    printf("Read the integer from keyboard: "); // prompts the user to enter an integer
    scanf("%d", &data); // reads the input from user and stores in variable 'data'
    result = data << 3;  // left shift the value of 'data' by 3 
    printf("The left shifted data is = %d", result); // prints the left shifted value of 'data'

    return 0;
}

