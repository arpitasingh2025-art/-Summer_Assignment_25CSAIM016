//Write a program to Create menu-driven calculator.
#include<stdio.h>
int main()
{
    int choice, a, b;
    do
    {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }
        switch(choice)
        {
            case 1:
                printf("Result: %d\n", a + b);
                break;
            case 2:
                printf("Result: %d\n", a - b);
                break;
            case 3:
                printf("Result: %d\n", a * b);
                break;
            case 4:
                if(b == 0)
                    printf("Cannot divide by zero!\n");
                else
                    printf("Result: %d\n", a / b);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    while(choice != 5);
    return 0;
}
