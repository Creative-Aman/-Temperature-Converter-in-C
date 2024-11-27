#include<stdio.h>
int power(int a ,int b){
    if(b==0)return 1;
    int z=power(a,b/2) ;
    if (b%2!=0)
        return z*z*a;
    else 
    return z*z;
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
    return 0;
}