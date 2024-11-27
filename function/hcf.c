#include<stdio.h>
int min(int a,int b){
    if (a<b) return a;
    else return b;
}
int gcd (int x,int y){
    int s;
    for (int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
            s=i;
            break;
        }
    }
    return s;
}
int main (){
    int a;
    printf("Enter first number : ");
    scanf("%d",&a);
    int b;
    printf("Enter second number : ");
    scanf("%d",&b);
    int hcf =gcd(a,b);
    printf("The HCF of %d & %d is : %d\n",a,b,hcf);
    return 0;
}