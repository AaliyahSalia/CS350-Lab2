// Use switch statement to display Monday to Sunday

// Output:

// enter m for Monday
// t for Tuesday
// w for Wednesday
// h for Thursday
// f for Friday
// s for Saturday
// u for Sunday: f			
// Friday

// Notice that “f” is your input from keyboard

#include <stdio.h>

int main(void){
    char day;
    printf("Enter m for Monday \n"); //prompt user to enter.
    printf("t for Tuesday \n"); //prompt user to enter.
    printf("w for Wednesday \n"); //prompt user to enter.
    printf("h for Thursday \n"); //prompt user to enter.
    printf("f for Friday \n"); //prompt user to enter.
    printf("s for Saturday \n"); //prompt user to enter.
    printf("u for Sunday: \n");  //prompt user to enter.
    scanf("%c", &day); //reads the input from user and stores it in variable 'day'. 
    switch(day){
        case 'm':
            printf("Monday");
            break;
        case 't':
            printf("Tuesday");
            break;
        case 'w':
            printf("Wednesday");
            break;
        case 'h':
            printf("Thursday");
            break;
        case 'f':
            printf("Friday");
            break;
        case 's':
            printf("Saturday");
            break;
        case 'u':
            printf("Sunday");
            break;
        default:
            printf("Invalid input"); //if input is invalid it will print 'Invalid input'
            break;
    }
    return 0;

}
 
