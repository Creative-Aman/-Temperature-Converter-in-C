#include<stdio.h>
void fact(int n){
    for (int i=1;i<=n;i++){
    int sum =1;
        for (int j=1;j<=i;j++){
            sum=sum*j;
        }
        printf("%d factorial is %d\n",i,sum);
    }
    return ;
}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fact(n);
    return 0 ;
}