#include <stdio.h>
int main (){
 int a ;
 printf ("Enter your number : ");
 scanf("%d",&a);
for (int i=2 ; i<=a-1 ;i++){

   if (a%i==0){
    printf("The given number is composite \n");
    break;
   }else 
   {
    printf("The given number is prime . \n");
    break;
   }
}
    return 0;
}

// Enter your number : 3
// The given number is prime . 