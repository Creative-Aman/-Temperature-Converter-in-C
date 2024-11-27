#include<stdio.h>
int add(int n){
    if(n==1 || n==0) return 1;
    int sum = n+add(n-1);
    return sum;
}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = add(n);
    printf("Sum upto %d is : %d",n,sum);
    return 0;
}