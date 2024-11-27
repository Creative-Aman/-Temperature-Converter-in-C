#include<stdio.h>
int main ()
{
int a ;
  printf ("Enter your year: ");
scanf ("%d",&a);
if (a%4==0){
    printf ("Given year is leap year");
}
else {
    printf("Given year is not leap year");
}
    return 0;
}
// Enter your year: 5344
// Given year is leap year%