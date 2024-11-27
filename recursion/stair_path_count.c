#include <stdio.h>
int stair(int n ){
    if (n==1 || n==0) return 1;
    int totalways =stair(n-1)+stair(n-2);
    return totalways;
}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ways =stair(n);
    printf("The number of ways for climbing %d stairs are = %d .\n",n,ways);
    return 0;
}