#include <stdio.h>
int main (){
int a ,b;
printf ("Cost price : ");
scanf("%d",&a);
printf ("Selling price : ");
scanf("%d",&b);
if (a>b){
    printf("LOSS");
}
 if (a==b){
    printf("NO PROFIT NO LOSS");
 }

else {
    printf ("PROFIT");
}
    return 0;
}
// Cost price : 324
// Selling price : 5654
// PROFIT