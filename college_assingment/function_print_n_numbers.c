#include<stdio.h>
int sum (int n){
    int sum=0;
    for(int i=1;i<=n;i++){
       printf(" %d\n",i);
    }      
    return 0 ;
}
int main (){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    sum(n);
    

    return 0 ;
}