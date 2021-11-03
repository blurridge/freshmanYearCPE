/*===================================================================================
FILENAME        :machaconZa_LE3_11.c
DESCRIPTION     :Program that asks for user’s yearly pay and displays his weekly pay.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :06 September 2021
===================================================================================*/

#include <stdio.h>
#define WEEK 52.1429

int main(){

    float yearlyPay, weeklyPay;
    printf("How much do you make per year? : PHP ");
    scanf("%f", &yearlyPay);
    weeklyPay = yearlyPay/WEEK;
    /*yearlyPay is divided by WEEK which is defined in the header as
    as there are 52.1429 weeks in a year on average. */
    printf("Your weekly pay is PHP %.2f", weeklyPay);
    /* A precision of 2 is used since it is dealing with money */
    
    return 0;
}

