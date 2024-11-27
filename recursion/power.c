#include<stdio.h>
int power(int a ,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main (){

    int a;
    printf("Enter a number : ");
    scanf("%d",&a); 
    int b;
    printf("Enter it's power : ");
    scanf("%d",&b); 
    int x=power(a,b);
    printf("%d raised  to power %d is = %d .\n",a,b,x);
}
// Enter a number : 4
// Enter it's power : 2
// 4 raised  to power 2 is = 16 .