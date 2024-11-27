#include <stdio.h>
int main (){
    float a,p,r,t;
    printf("Enter Initial balance : ");
    scanf("%f",&p);
    printf("Enter rate : ");
    scanf("%f",&r);   
    printf("Enter number of years : ");
    scanf("%f",&t);
    a=p*(r/100)*t;
        printf("Simple interest is : %.4f",a);

    return 0 ;
}

// Enter Initial balance : 900
// Enter rate : 3
// Enter number of years : 2
// Simple interest is : 54.0000