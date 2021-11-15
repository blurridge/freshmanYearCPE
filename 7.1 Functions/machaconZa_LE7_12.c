/*============================================================================================================
FILENAME        :machaconZa_LE7_12.c
DESCRIPTION     :Determine whether the letter entered by the user is vowel or consonant.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :15 November 2021
============================================================================================================*/

#include <stdio.h>
#include <stdbool.h>

bool isLetter (char ch);
bool isVowel (char ch);

int main(){
    
    char userInput;
    printf("Enter a letter: ");
    scanf("%c", &userInput);
    bool letterCheck = isLetter(userInput);
    bool vowelCheck = isVowel(userInput);
    if(letterCheck && vowelCheck)
        printf("VOWEL!");
    else if(letterCheck)
        printf("CONSONANT");
    else
        printf("INVALID INPUT!");

    return 0;
}

bool isLetter(char ch){
    bool letterResult;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        letterResult = 1;
    else
        letterResult = 0;
    return letterResult;
}

bool isVowel(char ch){
    bool vowelResult;
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        vowelResult = 1;
    else
        vowelResult = 0;
    return vowelResult;
}