#include <stdio.h>
int main (){
    int a , b ,c ;
        printf("Enter first number : ");
        scanf("%d",&a);
        printf("Enter second number : ");
        scanf("%d",&b);
        printf("Choose the options : \n");
        printf("1. Addition .\n");
        printf("2. Substraction .\n");
        printf("3. Multiplication .\n");
        printf("4. Division .\n");
        printf("Enter your choice = ");
        scanf("%d",&c);
    switch (c){
        case 1:
            c=a+b;
            printf("Addition is : %d",c);
        break;
        case 2:
            c=a-b;
            printf("Substraction is : %d",c);
        break;
        case 3:
            c=a*b;
            printf("Multiplication is : %d",c);
        break;
        case 4:
            c=a/b;
            printf("Division is : %d",c);
        break;
        default:
            printf("Invalid choice .");
    }
    return 0;
}
// Enter first number : 5
// Enter second number : 9
// Choose the options :
// 1. Addition .
// 2. Substraction .
// 3. Multiplication .
// 4. Division .
// Enter your choice = 3
// Multiplication is : 45