/*============================================================================
FILENAME        :machaconZa_LE4_12.c
DESCRIPTION     :Program that computes the real roots of a quadratic equation.
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :13 September 2021
==============================================================================*/

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;
    printf("Enter the value of a : ");
    scanf("%f", &a);
    printf("Enter the value of b : ");
    scanf("%f", &b);
    printf("Enter the value of c : ");
    scanf("%f", &c);
    float discriminate = (b*b)-(4*a*c);
    /*Discriminate is calculated by getting the difference of 
    the b squared and the product of 4, a, and c.*/
    if(a == 0 && b == 0)
    {
        printf("No solution.");
    }
    else if(a == 0)
    {
        float singleRoot = -c/b;
        printf("The root is : %.3f", singleRoot);
    }
    else if(discriminate < 0)
    {
        printf("No real roots.");
    }
    else
    {
        float firstRoot = ((-b+sqrt(discriminate))/(2*a)), secondRoot = ((-b-sqrt(discriminate))/(2*a));
        //firstRoot and secondRoot are calculated using the quadratic formula
        printf("The roots are : %.3f %.3f", firstRoot, secondRoot);
    }
    
    return 0;
}