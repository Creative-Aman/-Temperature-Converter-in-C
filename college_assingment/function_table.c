#include<stdio.h>
int table (int n){
    for(int i=1;i<=10;i++){
        int multi=n*i;
        printf("%d * %d = %d \n",n,i,multi);
    }
    return 0 ;
}
int main (){
    int n;
    int sum ;
    printf("Enter number to print it's table : ");
    scanf("%d",&n);
    table(n);
    

    return 0 ;
}