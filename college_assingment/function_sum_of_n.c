#include<stdio.h>
int sum (int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }       printf("Sum upto %d number is : %d\n",n,sum);
    return 0 ;
}
int main (){
    int n;
    printf("Enter number to print it's sum : ");
    scanf("%d",&n);
    sum(n);
    

    return 0 ;
}