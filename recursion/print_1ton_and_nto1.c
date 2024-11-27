#include<stdio.h>
void vari(int n){    
    if(n==0) return ; 
    printf(" %d \n",n);
    vari(n-1);
    printf(" %d \n",n);
    return ; 
}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    vari(n);
    return 0;
}