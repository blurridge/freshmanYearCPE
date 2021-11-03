/*====================================================================================================
FILENAME        :machaconZa_LE4_11.c
DESCRIPTION     :Program that determines whether the letter entered by the user is vowel or consonant.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :13 September 2021
====================================================================================================*/

#include <stdio.h>


int main(){

    char letterInput;
    printf("Enter a letter: ");
    scanf("%c", &letterInput);
    
    /*letterInput is then checked whether it is part of the alphabet either lowercase or 
    uppercase. It can be compared using relational operators since each character has a
    corresponding ASCII code. For A to Z, it ranges from 65 to 90. For a to z, it ranges
    from 97 to 122.*/
    if((letterInput >= 'a' && letterInput <= 'z') || (letterInput >= 'A' && letterInput <= 'Z')) 
    {
        if(letterInput == 'a' || letterInput == 'A' || letterInput == 'e' || letterInput == 'E' || letterInput == 'i' || letterInput == 'I' || letterInput == 'o' || letterInput == 'O' || letterInput == 'u' || letterInput == 'U')
        {
            printf("VOWEL!");
        }
        else
        {
            printf("CONSONANT!");
        }
    }
    else
    {
        printf("INVALID INPUT!");
    }
    
    return 0;
}