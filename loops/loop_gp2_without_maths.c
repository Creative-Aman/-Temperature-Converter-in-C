#include <stdio.h>
int main (){
int a ;
printf ("Enter your number : ");
scanf("%d",&a);
int b =3;
for (int i=1 ; i<=a ;i++){
    printf ("%d \n",b);
    b=b*4;
}
    return 0;
}


// Enter your number : 12
// 3 
// 12 
// 48 
// 192 
// 768 
// 3072 
// 12288 
// 49152 
// 196608 
// 786432 
// 3145728 
// 12582912 