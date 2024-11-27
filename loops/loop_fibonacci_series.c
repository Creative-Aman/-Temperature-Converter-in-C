#include<stdio.h>
int main (){
int a ;
printf("Enter a number : ");
scanf("%d",&a);
int b=1;
int c=0 ;
int sum =0 ;
for (int i=1 ;i<=a ;i++){
sum = b+c ;
b=c;
c=sum;
printf ("The %dth number of fibonacci number is : %d \n",i,sum);
}

    return 0;
}
// Enter a number : 10
// The 1th number of fibonacci number is : 1 
// The 2th number of fibonacci number is : 1 
// The 3th number of fibonacci number is : 2 
// The 4th number of fibonacci number is : 3 
// The 5th number of fibonacci number is : 5 
// The 6th number of fibonacci number is : 8 
// The 7th number of fibonacci number is : 13 
// The 8th number of fibonacci number is : 21 
// The 9th number of fibonacci number is : 34 
// The 10th number of fibonacci number is : 55 