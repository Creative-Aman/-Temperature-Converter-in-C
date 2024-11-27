#include<stdio.h>
int main (){
int a ;
printf("Enter your number : ");
scanf("%d",&a);
int sum =0 ;
int ld =0;
while (a!=0){
    ld=a%10;
   if (ld%2==0){
    sum = sum+ld;
   }
    a=a/10;
} printf("The sum of the even digits is %d ",sum);

    return 0;
}

// Enter your number : 8
// The sum of the even digits is 8 