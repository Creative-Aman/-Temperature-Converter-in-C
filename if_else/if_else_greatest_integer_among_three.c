#include <stdio.h>
int main ()
{
int a , b , c ;
printf("A : ");
scanf("%d",&a);
printf("B : ");
scanf("%d",&b);
printf("C : ");
scanf("%d",&c);

if (a>b && a>c){
    printf ("A is greatest .");
}
else if (b>a && b>c){
    printf ("B is greatest .");
}
else if (a==b && b==c){
    printf ("All are same .");
}
else {
    printf ("C is greatest .");
}
    return 0;
}
// A : 435
// B : 32
// C : 432
// A is greatest .