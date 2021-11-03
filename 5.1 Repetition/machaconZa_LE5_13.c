/*============================================================================================================
FILENAME        :machaconZa_LE5_13.c
DESCRIPTION     :Program that lets the user choose an operation (power problem solver, factorial problem solver, 
                or finding roots for quadratic equations using quadratic formula) from the menu. 
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :27 September 2021
============================================================================================================*/

#include <stdio.h>
#include <math.h>

int main(){

    int choice, i;
    long long base, power, num;
    float a, b, c;
    
    do{
        long long answerPower = 1, factorial = 1;
        printf("[1] Power Problem Solver\n");
        printf("[2] Factorial Problem Solver\n");
        printf("[3] Quadratic Equation Root Problem Solver\n");
        printf("[4] Quit App\n");
        printf("Enter the number of your choice : ");
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("Enter your base number : ");
            scanf("%lld", &base);
            printf("Enter the power : ");
            scanf("%lld", &power);
            for(i = 1; i <= power; i++)
            {
                answerPower*=base;
            }
            printf("The answer of %lld raised to the power of %lld is %lld\n", base, power, answerPower);
        }
        if(choice == 2)
        {
            printf("Enter the number you want to factorialize : ");
            scanf("%lld", &num);
            long long numBase = num;
            //Stored num to numBase so that it can be used in the print since num is decremented in the while loop.
            while(num > 0)
            {
                factorial*=num;
                num--;
            }
            printf("The factorial of %lld is %lld\n", numBase, factorial);
        }
        if(choice == 3)
        {
            printf("Enter the value of a : ");
            scanf("%f", &a);
            printf("Enter the value of b : ");
            scanf("%f", &b);
            printf("Enter the value of c : ");
            scanf("%f", &c);
            float discriminant = (b*b)-(4*a*c);
            /*Discriminant is calculated by getting the difference of 
             the b squared and the product of 4, a, and c.*/
            if(a == 0 && b == 0)
            {
                printf("No solution.\n");
            }
            else if(a == 0)
            {
                float singleRoot = -c/b;
                printf("The root is : %.3f\n", singleRoot);
            }
            else if(discriminant < 0)
            {
                printf("No real roots.\n");
            }
            else
            {
                float firstRoot = ((-b+sqrt(discriminant))/(2*a)), secondRoot = ((-b-sqrt(discriminant))/(2*a));
                //firstRoot and secondRoot are calculated using the quadratic formula
                printf("The roots are : %.3f %.3f\n", firstRoot, secondRoot);
            }
        }
    }while(choice != 4);
    
    
    return 0;
}