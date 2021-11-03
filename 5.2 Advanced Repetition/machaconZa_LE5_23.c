/*============================================================================================================
FILENAME        :machaconZa_LE5_23.c
DESCRIPTION     :Create a program that will display the 1-N value of the Fibonacci sequence. Use a space for 
                the spacing between numbers horizontally.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :04 October 2021
============================================================================================================*/

#include <stdio.h>

int main(){
    
    int userInput, i, first = 0, second = 1, next;
    printf("Enter limit: ");
    scanf("%d", &userInput);
    while(userInput < 0)
    {
        printf("INVALID INPUT! A negative number has been entered.\n");
        printf("Enter limit: ");
        scanf("%d", &userInput);
    }
    
    printf("Fibonacci sequence: ");
    for(i = 1; i <= userInput; i++)
    {
        if(i == 1)
        {
            next = second;
            printf("%d ", next);
        }
        else
        {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
    return 0;
}