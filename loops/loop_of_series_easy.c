#include<stdio.h>
int main (){
int a;
printf("Enter a number :");
scanf("%d",&a);
int sum=0;
if (a%2==0) sum =-a/2;
else sum = (-a/2) + a;
printf("The sum is : %d",sum);

    return 0;
}

// Enter a number :8
// The sum is : -4%     