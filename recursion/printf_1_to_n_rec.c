#include <stdio.h>
int vari(int x,int n){    
    if (x==n) return n;
    printf(" %d ",x);
    return vari(x+1,n);
}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int x=vari(1,n);
    printf(" %d ",x);
    return 0;
}