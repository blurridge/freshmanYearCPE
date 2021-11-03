/*============================================================================================================
FILENAME        :machaconZa_LE5_11.c
DESCRIPTION     :Program that will ask 10 integers and display the average of all even numbers and the product 
                of all odd numbers entered by the user
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :27 September 2021
============================================================================================================*/

#include <stdio.h>

int main(){

    int numInput, sumEven = 0, productOdd = 1, evenCnt = 0;
    float aveEven;
    for(int i = 1; i <= 10; i++)
    {
        printf("Enter integer #%d : ", i);
        scanf("%d", &numInput);
        if(numInput%2 == 0)
        {
            sumEven+=numInput;
            evenCnt++;
        }
        else
            productOdd*=numInput;
    }
    aveEven = (float)sumEven/evenCnt;
    printf("The average of the even integers are : %.2f\n", aveEven);
    printf("The product of the odd integers are : %d", productOdd);
    
    return 0;
}