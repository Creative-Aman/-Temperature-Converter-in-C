#include<stdio.h>
int main (){
int a ;
printf("Enter a number : ");
scanf("%d",&a);
int product=1;
for (int i=1 ;i<=a ;i++)
product = product *i ;
printf("The factorial of the number is : %d",product);
    return 0;
}
// Enter a number : 23
// The factorial of the number is : 862453760