/*============================================================================================================
FILENAME        :machaconZa_LE5_22.c
DESCRIPTION     :Create a program that would display like a pyramid
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :04 October 2021
============================================================================================================*/

#include <stdio.h>

int main(){

    int userInput, i, j, k, num, spacesNeeded, numDigits, limit;
    printf("Enter a value for N: ");
    scanf("%d", &userInput);
    while(userInput < 0)
    {
        printf("INVALID INPUT! A negative number has been entered.\n");
        printf("Enter a value for N: ");
        scanf("%d", &userInput);
    }

    for (i = 1; i <= userInput; i++)
    {
        num = 0;
        spacesNeeded = userInput - i;
        numDigits = (2*i)-1;
        limit = (numDigits/2)+1;
        for (j = 1; j <= spacesNeeded; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= numDigits; k++)
        {
            if(k <= limit)
            {
                num++;
                printf("%d", num);
            }
            else
            {
                num--;
                printf("%d", num);
            }
        }
        printf("\n");
    }

    return 0;
}
