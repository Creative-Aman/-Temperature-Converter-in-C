#include <stdio.h>
int main (){
int n ;
printf("Enter a number : ");
scanf("%d",&n);
 if (n%5==0 || n%3==0){
     if (n%15!=0){
         printf ("The number is divisible by 5 or 3 but not by 15 .\n");
     }
     else {
         printf ("Number is divisible by 15 .\n");
     }
 }
// if ( (n%5==0 || n%3==0) && n%15!=0 ){
//     printf ("Number is divisible by 5 or 3 but not by 15 .\n")
// }
else {
    printf ("Number is not divisible by 5 or 3 .\n");
}
    return 0 ;
}
// Enter a number : 5345
// The number is divisible by 5 or 3 but not by 15 .