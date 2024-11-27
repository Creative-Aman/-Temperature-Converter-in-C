#include<stdio.h>
int main (){
    float x;
        printf ("Enter a decimal number : ");
        scanf("%f",&x);
    int y ;
        y=x;
    float z = x-y;
        printf ("the decimal part of the no is : %.4f ",z);
    return 0;
}
// Enter a decimal number : 6.4324
// the decimal part of the no is : 0.4324 