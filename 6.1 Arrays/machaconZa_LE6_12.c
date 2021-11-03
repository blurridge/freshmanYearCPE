/*============================================================================================================
FILENAME        :machaconZa_LE6_12.c
DESCRIPTION     :Ask a string and determine how maany vowels and consonants.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :03 November 2021
============================================================================================================*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[100];
    printf("Enter your string: ");
    gets(str);
    int length = strlen(str), i, vowCount = 0, consoCount = 0;
    for(i = 0; i < length; i++)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
                vowCount++;
            else
                consoCount++;
        }
    }
    printf("There are %d vowels and %d consonants.", vowCount, consoCount);
    
    return 0;
}