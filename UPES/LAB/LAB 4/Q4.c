/*According to the gregorian calendar, it was Monday on the date 01/01/01. 
If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/
#include <stdio.h>

int main() {
    int year;
    char ch;

    printf("Enter a year : ");

//Asking the user for the value of the YEAR
    if (scanf("%d", &year) != 1 || year < 1) {
        printf("Error: Invalid input. Please enter a positive number only.\n");
        return 1; 
    }

    long int days = 0;

    // Leap year check inside loop
    for (int i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            days += 366;
        else
            days += 365;
    }

    int dayOfWeek = days % 7;  

    printf("On 01/01/%d, it was ", year);
    switch(dayOfWeek) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
        default: printf("Error in calculation!\n"); break;
    }

    return 0;
}
