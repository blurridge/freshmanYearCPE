/*============================================================================================================
FILENAME        :machaconZa_FE3.c
DESCRIPTION     :Write a program that allows a user to enter 5 number elements each for 2 arrays. Then swap and 
                displays all of the number elements in the arrays.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :15 December 2021
============================================================================================================*/

#include <stdio.h>
#define M 2
#define N 5

void swapNum(int numArray[M][N]);
void printSwappedNum(int numArray[M][N]);

int main(){

    int numArray[M][N], i, j;
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("Enter num #%d for Array #%d : ", j+1, i+1);
            scanf("%d", &numArray[i][j]);
        }
    }
    swapNum(numArray);
    printSwappedNum(numArray);
    return 0;
}

void swapNum(int numArray[M][N]){

    int temp, i;
    for(i = 0; i < N; i++)
    {
        temp = numArray[0][i];
        numArray[0][i] = numArray[1][i];
        numArray[1][i] = temp;
    }
}

void printSwappedNum(int numArray[M][N]){

    int i, j;
    for(i = 0; i < M; i++)
    {
        printf("New array #%d : {", i+1);
        for(j = 0; j < N; j++)
        {
            if(j != N-1)
                printf("%d, ", numArray[i][j]);
            else
                printf("%d", numArray[i][j]);
        }
        printf("}\n");
    }
}