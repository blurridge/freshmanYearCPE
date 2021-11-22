/*============================================================================================================
FILENAME        :machaconZa_LE8_13.c
DESCRIPTION     :Create a function that determine and returns the maximum number in an array of integers using 
                pointers. The function accepts the starting address of the array and number of entries.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :22 November 2021
============================================================================================================*/

#include <stdio.h>

int maxSearch(int *numArr, int numOfEntries);

int main(){

    int numOfEntries, i, maxNum;
    printf("Enter number of entries: ");
    scanf("%d", &numOfEntries);
    int numArray[numOfEntries];
    for(i = 0; i < numOfEntries; i++)
    {
        printf("Enter number: ");
        scanf("%d", &numArray[i]);
    }
    maxNum = maxSearch(numArray, numOfEntries);
    printf("Maximum Number: %d", maxNum);

    return 0;
}

int maxSearch(int *numArr, int numOfEntries){
    int i, max = *numArr;
    for(i = 0; i < numOfEntries; i++)
    {
        if(*(numArr + i) > max)
            max = *(numArr + i);
    }
    return max;
}