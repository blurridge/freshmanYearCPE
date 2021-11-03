/*============================================================================================================
FILENAME        :machaconZa_LE6_11.c
DESCRIPTION     :Ask for 5 strings and display the longest string.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :03 November 2021
============================================================================================================*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char strArray[5][100];
    int i, j, length, longestWordIndex, max = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter string #%d: ", i+1);
        gets(strArray[i]);
        length = strlen(strArray[i]);
        if(length > max)
        {
            max = length;
            longestWordIndex = i;
        }
    }
    printf("The longest string is: ");
    puts(strArray[longestWordIndex]);

    return 0;
}