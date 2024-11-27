#include <stdio.h>
int main (){
int a ;
printf ("Enter your number : ");
scanf("%d",&a);
int b =4;
for (int i=1 ; i<=a ;i++){
    printf ("%d \n",b);
    b=b+3;
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