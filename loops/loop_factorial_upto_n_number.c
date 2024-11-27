#include<stdio.h>
int main (){
int a ;
printf("Enter a number : ");
scanf("%d",&a);
int product=1;
for (int i=1 ;i<=a ;i++){
product = product *i ;
printf("The factorial of %d is : %d\n",i,product);}
    return 0;
}
// Enter a number : 4
// The factorial of 1 is : 1
// The factorial of 2 is : 2
// The factorial of 3 is : 6
// The factorial of 4 is : 24