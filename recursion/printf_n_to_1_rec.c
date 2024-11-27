#include<stdio.h>
int vari(int n){    
    if(n==1) return 1;
    printf(" %d \n",n);
    return vari(n-1);
}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int x=vari(n);
    printf(" %d ",x);
    return 0;
}