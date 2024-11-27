#include <stdio.h>
int main ()
{
int a ;
printf("Enter a number : ");
scanf ("%d",&a);

if (a>99 && a<1000){
   printf ("Provided number is of three digits .");
}

else {
    printf("Provided number is not if three digits .");
}
    return 0 ;
}
// Enter a number : 789
// Provided number is of three digits .