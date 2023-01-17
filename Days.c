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
    printf("Enter m for Monday \n");
    printf("t for Tuesday \n");
    printf("w for Wednesday \n");
    printf("h for Thursday \n");
    printf("f for Friday \n");
    printf("s for Saturday \n");
    printf("u for Sunday: \n");
    scanf("%c", &day);
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
            printf("Invalid input");
            break;
    }
    return 0;

}
 
