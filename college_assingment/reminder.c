#include <stdio.h>
int main ()
{
int  a, b , q ,r ;
printf ("enter a :");
scanf ("%d",&a);
printf ("enter b :");
scanf ("%d",&b);
q= a/b;
r = a%b;
printf ("Yur quotient is : %d \n",q);
printf ("Your reminder is %d when %d is divided by %d \n",r,a,b);
return 0;
}

// enter a :798
// enter b :56
// Yur quotient is : 14 
// Your reminder is 14 when 798 is divided by 56 