/*=============================================================================================
FILENAME        :machaconZa_LE3_12.c
DESCRIPTION     :Program that extracts and adds the two least significant digits of an integer.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :06 September 2021
=============================================================================================*/

#include <stdio.h>
#define DIVISOR 10

int main(){

    int num, sum, onesDigit, tensDigit;
    printf("Enter a number\t: ");
    scanf("%d", &num);
    onesDigit = num%DIVISOR;
    /* The ones digit can be extracted using the modulo operator
    as the remainder from a number divided by 10 is its last 
    digit.*/
    tensDigit = (num/DIVISOR)%DIVISOR;
    /* The tens digit on the other hand is divided first by 10
    in order to eliminate the ones digit. Once done, the modulo
    operator is used on it in order to get the tens digit. */
    sum = tensDigit + onesDigit;
    /* The two previous digits that were extracted are then
    added together in order to get the final sum needed
    by the problem. */
    printf("Sum \t\t: %d + %d = %d", tensDigit, onesDigit, sum);

    return 0;
}