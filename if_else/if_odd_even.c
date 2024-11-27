#include <stdio.h>
int main ()
{
int a ;
printf ("Enter your number : ");
scanf("%d",&a);
if (a%2==0){   //even 
    printf ("Number is even ");
}
if (a%2!=0){   //odd
    printf("Number is odd ");
}
return 0;
}
// Enter your number : 543
// Number is odd 