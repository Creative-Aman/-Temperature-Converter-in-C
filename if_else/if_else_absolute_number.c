#include<stdio.h>
int main (){
    int a ;
        printf ("enter your number :");
        scanf("%d",&a);
    if (a<0){           //for negitive number
        a=a*(-1);
    }
        printf("the absolute value is :%d ",a);
    return 0;
}
// enter your number :-244
// the absolute value is :244