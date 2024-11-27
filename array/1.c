#include <stdio.h>
int main()
{
    printf("Calculator\n");
    int a, b;
    int add;
    int sub;
    int multi;
    int div;
    int choice;
    do{
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter type of operation :\n");
    printf("1. Addition .\n");
    printf("2. Substraction .\n");
    printf("3. Multiplication .\n");
    printf("4. Division .\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add = a + b;
        printf("Addition of %d & %d is : %d\n", a, b, add);
        break;
    case 2:
        sub = a - b;
        printf("Substraction of %d & %d is : %d\n", a, b, sub);
        break;
    case 3:
        multi = a * b;
        printf("Multiplication of %d & %d is : %d\n", a, b, multi);
        break;
    case 4:
        if (b == 0)
        {
            printf("2nd number can't be 0 .\n");
        }
        else
        {
            div = a / b;
            printf("Divsion of %d & %d is : %d\n", a, b, div);
        }
        break;
    }
    }
    while(choice==0);
    printf("Exiting.....\n");
    
    return 0;
}