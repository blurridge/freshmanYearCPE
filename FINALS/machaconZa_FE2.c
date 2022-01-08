/*============================================================================================================
FILENAME        :machaconZa_FE2.c
DESCRIPTION     :Write a program that creates the structure shown in figure below. Using the pointers p, q and 
                r, it gets integer user-input and display data of a, b and c.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :15 December 2021
============================================================================================================*/

#include <stdio.h>

int main(){

    int a, b, c, *p = &a, *q = &b, *r = &c;
    scanf("%d %d %d", p, q, r);
    printf("%d %d %d", *p, *q, *r);
    return 0;
}
