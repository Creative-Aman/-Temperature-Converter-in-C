#include<stdio.h>
int main ()
{
int a ,b ,c ;
printf ("Enter first side : ");
scanf ("%d",&a);
printf ("Enter second side : ");
scanf ("%d",&b);
printf ("Enter third side : ");
scanf ("%d",&c);

if (a<b+c || b<a+c || c<a+b){
    printf("These can be sides of a triangle .");
}
else {
    printf ("These can't be sides of a triangle .");
}
    return 0 ;
} 
// Enter first side : 53
// Enter second side : 75
// Enter third side : 13
// These can be sides of a triangle