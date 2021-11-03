/*============================================================================================================
FILENAME        :machaconZa_LE5_12.c
DESCRIPTION     :Program that will ask the correct numeric passcode before the user can continue his task.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :27 September 2021
============================================================================================================*/

#include <stdio.h>

int main(){

    int passcode = 7984, trials = 3, userInput;
    
    do{
        printf("Enter passcode. You have %d attempt/s remaining. : ", trials);
        scanf("%d", &userInput);
        trials--;
        if(userInput == passcode)
            printf("ACCESS GRANTED");
        else if(trials == 0)
            printf("ACCESS DENIED");
    }while(passcode != userInput && trials > 0);
    
    return 0;
}