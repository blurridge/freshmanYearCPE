/*============================================================================================================
FILENAME        :machaconZa_LE8_11.c
DESCRIPTION     :Write a function that sets up an array called days, which contains pointers to the names of 
                the days of the week and return the name of the day from the given day. The function accepts 
                the given day.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :22 November 2021
============================================================================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *dayOfTheWeek(int dayNumber);

int main(){  

    int dayNumber;
    char *dayName;
    printf("Enter day: ");
    scanf("%d", &dayNumber);
    dayName = dayOfTheWeek(dayNumber);
    printf("Day of the week: %s", dayName);
    return 0;
}

char *dayOfTheWeek(int dayNumber){
    char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}, *dayName;
    dayName = (dayNumber < 1 || dayNumber > 7) ? "INVALID" : days[dayNumber-1];
    return dayName;
}