#include <stdio.h>
int main (){
int a ;
printf ("Enter your number : ");
scanf("%d",&a);
int b =2;
for (int i=1 ; i<=a ;i++){
    printf ("%d \n",b);
    b=b*2;
}
    return 0;
}

// Enter your number : 9
// 2 
// 4 
// 8 
// 16 
// 32 
// 64 
// 128 
// 256 
// 512 