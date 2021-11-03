/*==============================================================================
FILENAME        :machaconZa_LE3_13.c
DESCRIPTION     :Program that prints the tuition for 2 semesters at ABC College. 
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :06 September 2021
==============================================================================*/

#include <stdio.h>

int main(){

    const float unitPrice = 450;
    const float penaltyPrice = 2260;
    const float regFee = 450;
    float firstSem, secondSem, firstTuition, secondTuition, totalTuition;
    
    printf("1st Semester Number of Units: ");
    scanf("%f", &firstSem);
    printf("2nd Semester Number of Units: ");
    scanf("%f", &secondSem);
    firstTuition = regFee + (firstSem*unitPrice) + ((firstSem/12)*penaltyPrice);
    secondTuition = regFee + (secondSem*unitPrice) + ((secondSem/12)*penaltyPrice);
    /* The tuition for each semester is then calculated by finding the sum of the product 
    of firstSem or secondSem with unitPrice, the product between the quotient of firstSem 
    or secondSem and 12 with penaltyPrice, and the registration fee. */
    totalTuition = firstTuition + secondTuition;
    /* finalTuition is then calculated by adding the tuition of the two previous
    semesters. */
    printf("1st Semester Tuition Fee    :  %.2f \n", firstTuition);
    printf("2nd Semester Tuition Fee    : %.2f \n", secondTuition);
    printf("Total Tuition Fee\t    : %.2f \n", totalTuition);

    return 0;
}