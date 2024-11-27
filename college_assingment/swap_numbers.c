#include <stdio.h>
int main (){
    int a , b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A = %d \nB = %d \n",a,b);

    return 0;
}
// Enter 1st number : 6
// Enter 2nd number : 7
// A = 7 
// B = 6 