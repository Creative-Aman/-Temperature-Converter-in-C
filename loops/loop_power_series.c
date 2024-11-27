#include<stdio.h>
int main (){
int a ,b;
printf("Enter a number : ");
scanf("%d",&a);
printf("Enter it's power : ");
scanf("%d",&b);
int power =1 ;
for (int i=1 ;i<=b ;i++){
power = power*a;
printf ("%d to the power %d is: %d \n",a,i,power);
}

    return 0;
}

// Enter a number : 9
// Enter it's power : 3
// 9 to the power 1 is: 9 
// 9 to the power 2 is: 81 
// 9 to the power 3 is: 729 