#include<stdio.h>
int fibo (int a){
    if (a==0 ) return 0;
    if(a==2 || a==1) return 1;
    return fibo(a-1)+fibo(a-2);

}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int f=fibo(n);
    printf("The %dth number of fibonacci series s : %d .\n",n,f);
    return 0 ;
}