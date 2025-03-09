#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float div(int a, int b);
int sum=0,choice, num1, num2, result;

int main() 
{
    choice, num1, num2, result;
    printf("\n---------------MENU---------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    
    do {
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) 
        {
           printf("\nEnter the value of num1= ");
           scanf("%d",&num1);
           printf("\nEnter the value of num2= ");
           scanf("%d",&num2);
        }
        else
        {
            printf("\nInvalid chioce");
        }

        switch (choice) 
        {
            case 1:
                result = add(num1, num2);
                printf("\nAddition = %d", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("\nSubtraction = %d", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("\nMultiplication = %d", result);
                break;
            case 4:
                
                result = div(num1, num2);
                printf("\ndivision  = %.2f", (float)result);
                break;
            case 5:
                printf("\nExiting the calculator.");
                break;
            
        }
    } while (choice != 5);

    return 0;
}


int add(int a, int b)
{
    
    sum = a + b;
    return sum;
}

int subtract(int a, int b) 
{
    sum = a - b;
    return sum;
}

int multiply(int a, int b) 
{
    sum = a * b;
    return sum;
}

float div(int a, int b) 
{
    sum = a / b;
    return sum;
}


