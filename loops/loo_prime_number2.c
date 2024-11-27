#include <stdio.h>
int main (){
int a ;
printf("Enter your number : ");
scanf("%d",&a);
int b =0 ;
for (int i=2 ; i<=a-1 ; i++){
    if (a%i==0)

    b=1;
    break ;
}
if (a==1) printf("1 is neither prime nor composite .\n");
else if (b==0) printf("The given number is prime .\n");
else printf("The given number is composite .\n");
    return 0; 
}
// Enter your number : 4566
// The given number is composite .