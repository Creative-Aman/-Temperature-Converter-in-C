#include<stdio.h>
void fib(int x){
    int sum=0;
    int a=0;
    int b=1;
    printf(" %d  %d ",a,b);
    for(int i=1;i<=x-2;i++){
        sum=a+b;
        printf(" %d ",sum);
        a=b;
        b=sum;
    } 
    return ;
}
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    fib(a);
    return 0;
}