/*============================================================================================================
FILENAME        :machaconZa_ME1.c
DESCRIPTION     :A program that display the name of the day of the week from inputted day number
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :13 October 2021
============================================================================================================*/

#include <stdio.h>

int main(){

    int dayNumber;
    printf("Enter the day number : ");
    scanf("%d", &dayNumber);
    if(dayNumber == 1)
        printf("Monday");
    else if(dayNumber == 2)
        printf("Tuesday");
    else if(dayNumber == 3)
        printf("Wednesday");
    else if(dayNumber == 4)
        printf("Thursday");
    else if(dayNumber == 5)
        printf("Friday");
    else if(dayNumber == 6)
        printf("Saturday");
    else if(dayNumber == 7)
        printf("Sunday");
    else
        printf("Invalid day number!");

    return 0;
}