/*============================================================================================================
FILENAME        :machaconZa_LE7_11.c
DESCRIPTION     :Create a program that extracts and adds the two least significant digits of an integer.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :15 November 2021
============================================================================================================*/

#include <stdio.h>

int extractLSD(int num);
int extractSecondLSD(int num);
int sumDigits(int x, int y);

int main(){

    int num, sum, onesDigit, tensDigit;
    printf("Enter a number\t: ");
    scanf("%d", &num);
    onesDigit = extractLSD(num);
    tensDigit = extractSecondLSD(num);
    sum = sumDigits(onesDigit, tensDigit);
    printf("Sum \t\t: %d + %d = %d", tensDigit, onesDigit, sum);

    return 0;
}

int extractLSD(int num){
    int onesDigit = num%10;
    return onesDigit;
}

int extractSecondLSD(int num){
    int tensDigit = (num/10)%10;
    return tensDigit;
}

int sumDigits(int x, int y){
    int sum = x + y;
    return sum;
}