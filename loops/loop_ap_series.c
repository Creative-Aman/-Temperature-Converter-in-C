#include <stdio.h>
int main (){
int a ;
printf ("Enter your number : ");
scanf("%d",&a);
for (int i=4 ; i<=2*a-1 ;i=i+3){
    printf ("%d \n",i);
}
    return 0;
}

// 4 
// 7 
// 10 
// 13 
// 16 
// 19 
// 22 
// 25 
// 28 
// 31 
// 34 
// 37 
// 40 
// 43 
// 46 
