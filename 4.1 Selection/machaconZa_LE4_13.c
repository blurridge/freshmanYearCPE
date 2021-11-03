/*============================================================================================================
FILENAME        :machaconZa_LE4_13.c
DESCRIPTION     :Program that determines a student’s final grade and indicate whether it is passing or failing
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :13 September 2021
============================================================================================================*/

#include <stdio.h>

int main(){

    float firstMark, secondMark, thirdMark, fourthMark, finalGrade;
    printf("1st Mark: ");
    scanf("%f", &firstMark);
    printf("2nd Mark: ");
    scanf("%f", &secondMark);
    printf("3rd Mark: ");
    scanf("%f", &thirdMark);
    printf("4th Mark: ");
    scanf("%f", &fourthMark);

    /*All marks have to satisfy the constraints of being values between 0 to 100 in order for 
    finalGrade to be calculated. This saves time and memory especially if the marks don't satisfy
    the constraints.*/
    if((firstMark >= 0 && firstMark <= 100) && (secondMark >= 0 && secondMark <= 100) && (thirdMark >= 0 && thirdMark <= 100) && (fourthMark >= 0 && fourthMark <= 100))
    {
        finalGrade = (firstMark + secondMark + thirdMark + fourthMark)/4;
        printf("FINAL GRADE: %.2f\t", finalGrade);
        if(finalGrade >= 50)
            printf("REMARKS : PASSED");
        else
            printf("REMARKS : FAILED");
    }
    else
        printf("INVALID INPUT!");
    
    return 0;
}