#include<stdio.h>
int main (){
double x1 ,x2 ,x3 ,y1 ,y2 ,y3 ,m1 ,m2;
printf ("Enter x1 :");
scanf("%lf",&x1);
printf ("Enter x2 :");
scanf("%lf",&x2);
printf ("Enter x3 :");
scanf("%lf",&x3);
printf ("Enter y1 :");
scanf("%lf",&y1);
printf ("Enter y2 :");
scanf("%lf",&y2);
printf ("Enter y3 :");
scanf("%lf",&y3);

m1 = (y2-y1)/(x2-x1);
m2 = (y3-y2)/(x3-x2);

if (m1==m2){
    printf ("These points lie on a straight line .\n");
}
else {
    printf("These points don't lie in a straight line .\n");
}
    return 0 ;
}
// Enter x1 :43
// Enter x2 :756
// Enter x3 :34
// Enter y1 :8
// Enter y2 :45
// Enter y3 :87
// These points don't lie in a straight line .