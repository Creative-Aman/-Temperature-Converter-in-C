#include <stdio.h>
int main (){
int a ;
printf ("Enter your number : ");
scanf("%d",&a);

if (a%5==0 && a%3==0){
    printf ("Number is divisible by 5 & 3 .");
}
else {
    printf("Number is not divisiblr by 5 & 3 .");
}

    return 0;
}
// Enter your number : 534
// Number is not divisiblr by 5 & 3 .