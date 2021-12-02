/*============================================================================================================
FILENAME        :machaconZa_LE8_12.c
DESCRIPTION     :Write a function to search an element in array using pointers and return the index location. 
                The function accepts the starting address of the array and number of entries.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :22 November 2021
============================================================================================================*/

#include <stdio.h>

int indexSearch(int *numArr, int numOfEntries, int numToSearch);

int main(){

    int numOfEntries, i, indexLoc, numSearched;
    printf("Enter number of entries: ");
    scanf("%d", &numOfEntries);
    int numArray[numOfEntries];
    for(i = 0; i < numOfEntries; i++)
    {
        printf("Enter number: ");
        scanf("%d", &numArray[i]);
    }
    printf("Search data: ");
    scanf("%d", &numSearched);
    indexLoc = indexSearch(numArray, numOfEntries, numSearched);
    if(indexLoc >= 0)
        printf("FOUND IN Index %d", indexLoc);
    else
        printf("NOT FOUND");
    return 0;
}

int indexSearch(int *numArr, int numOfEntries, int numToSearch){
    int i = 0, index = -1;
    do{
        if(*(numArr + i) == numToSearch)
            index = i;
        i++;
    }while(i < numOfEntries && index < 0);
    return index;
}