#include <stdio.h>
int main (){
    int a ;
        printf ("Enter your number : ");
        scanf("%d",&a);

    if (a%5==0 || a%3==0){
        printf ("Number is divisible by either 5 or 3 .");
    }
    else {
        printf("Number is not divisible by 5 nor by 3 .");
    }
    return 0;
}
// Enter your number : 543
// Number is divisible by either 5 or 3 .