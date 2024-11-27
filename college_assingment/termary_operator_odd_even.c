#include<stdio.h>
int main (){
int x ;
printf("Enter a number : ");
scanf("%d",&x);
// termary operator
// ex1 ? ex2 : ex3 
x%2==0 ? printf("The number is even .") :  printf("The number is odd .") ;
return 0 ;
}
// Enter a number : 68
// The number is even .