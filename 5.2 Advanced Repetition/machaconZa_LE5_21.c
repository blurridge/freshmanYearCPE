/*============================================================================================================
FILENAME        :machaconZa_LE5_21.c
DESCRIPTION     :The program will ask the user to input the number of rows and columns the table should have 
                and display the multiplication table on screen. Use tab for the spacing between numbers 
                horizontally.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :04 October 2021
============================================================================================================*/

#include <stdio.h>

int main(){
    
    int colNumber, rowNumber, i, j, k, product;
    printf("Please enter the number of columns : ");
    scanf("%d", &colNumber);
    printf("Please enter the number of rows : ");
    scanf("%d", &rowNumber);
    while(colNumber < 0 || rowNumber < 0)
    {
        printf("INVALID INPUT! A negative number has been entered.\n");
        printf("Please enter the number of columns : ");
        scanf("%d", &colNumber);
        printf("Please enter the number of rows : ");
        scanf("%d", &rowNumber);   
    }

    for(i = 0; i <= rowNumber; i++)
    {
        if(i == 0)
        {
            printf("x\t");
            for(k = 1; k <= colNumber; k++)
                printf("%d\t", k);
            printf("\n");
        }
        else
        {
            printf("%d\t", i);
            for(j = 1; j <= colNumber; j++)
            {
                product = i*j;
                printf("%d\t", product);
            }
            printf("\n");
        }
    }

    return 0;
}