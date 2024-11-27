#include <stdio.h>
int main (){
int a ;
printf("Enter a number : ");
scanf("%d",&a);

int r=0;
while (a!=0){
    r=r*10;
r=r+(a%10);
a=a/10;
}printf("The reverse of the given number is : %d ",r);
return 0;
}

// Enter a number : 456
// The reverse of the given number is : 654