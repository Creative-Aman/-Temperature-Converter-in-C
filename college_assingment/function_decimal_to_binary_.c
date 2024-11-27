#include<stdio.h>
int binary(int n){
    int reminder;
    int sum=0;
    int b=1;
    for(int i=1;n>0;){
        reminder=n%2;
        sum=sum+reminder*b;
        n=n/2;
        b=b*10;
    }
    return sum ;
}
int main (){
    int n;
    int sum ;
    printf("Enter number in decimal : ");
    scanf("%d",&n);
    sum=binary(n);
    printf("%d",sum);

    return 0 ;
}