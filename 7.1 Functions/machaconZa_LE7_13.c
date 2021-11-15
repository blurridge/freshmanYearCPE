/*============================================================================================================
FILENAME        :machaconZa_LE7_13.c
DESCRIPTION     :Program that lets the user choose an operation (power problem solver, factorial problem solver, 
                or finding roots for quadratic equations using quadratic formula) from the menu. 
AUTHOR          :Zach Riane I. Machacon
CREATED ON      :15 November 2021
============================================================================================================*/

#include <stdio.h>
#include <math.h>

void displayMenu();
int powerSolver(int base, int p);
int factorialSolver(int num);
int quadraticSolver(int a, int b, int c);
float firstRoot, secondRoot;

int main(){
    
    int choice, base, power, num, answerPowerSolver, answerFactorialSolver, answerQuadraticSolver, a, b, c;
    do{
        displayMenu();
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("Enter your base number : ");
            scanf("%d", &base);
            printf("Enter the power : ");
            scanf("%d", &power);
            answerPowerSolver = powerSolver(base, power);
            printf("The answer of %d raised to the power of %d is %d\n", base, power, answerPowerSolver);
        }
        else if(choice == 2)
        {
            printf("Enter the number you want to factorialize : ");
            scanf("%d", &num);
            answerFactorialSolver = factorialSolver(num);
            printf("The factorial of %d is %d\n", num, answerFactorialSolver);
        }
        else if(choice == 3)
        {
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            printf("Enter the value of c : ");
            scanf("%d", &c);
            answerQuadraticSolver = quadraticSolver(a, b, c);
            if(answerQuadraticSolver == 1)
                printf("No solution.\n");
            else if(answerQuadraticSolver == 2)
                printf("The root is : %.3f\n", firstRoot);
            else if(answerQuadraticSolver == 3)
                printf("No real roots.\n");
            else if(answerQuadraticSolver == 4)
                printf("The roots are : %.3f %.3f\n", firstRoot, secondRoot);
        }
    }while(choice != 4);
    
    return 0;
}

void displayMenu(){
    printf("[1] Power Problem Solver\n");
    printf("[2] Factorial Problem Solver\n");
    printf("[3] Quadratic Equation Root Problem Solver\n");
    printf("[4] Quit App\n");
    printf("Enter the number of your choice : ");
}

int powerSolver(int base, int p){
    int answerPower = 1, i;
    for(i = 1; i <= p; i++)
    {
        answerPower*=base;
    }
    return answerPower;
}

int factorialSolver(int num){
    int factorial = 1;
    while(num > 0)
    {
        factorial*=num;
        num--;
    }
    return factorial;
}

int quadraticSolver(int a, int b, int c){
    float discriminant = (b*b)-(4*a*c);
    int flag;
    if(a == 0 && b == 0)
    {
        flag = 1;
    }
    else if(a == 0)
    {
        firstRoot = (float)-c/b;
        flag = 2;
    }
    else if(discriminant < 0)
    {
        flag = 3;
    }
    else
    {
        firstRoot = ((-b+sqrt(discriminant))/(2*a)), secondRoot = ((-b-sqrt(discriminant))/(2*a));
        flag = 4;
    }
    return flag;
}