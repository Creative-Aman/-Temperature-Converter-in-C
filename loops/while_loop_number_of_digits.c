#include <stdio.h>
int main (){
int a ;
printf("Enter your number : ");
scanf("%d",&a);
int b =0;
while (a!=0){
    a=a/10;
    b++;
}printf("This number is of %d digits .\n",b);

    return 0;
}
// Enter your number : 889
// This number is of 3 digits .