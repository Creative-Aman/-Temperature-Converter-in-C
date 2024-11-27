#include<stdio.h>
int maze(int n,int m){
    int rightways =0;
    int downways =0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightways += maze(n,m-1);
    }
    if (m==1){
        downways += maze(n-1,m);
    }
    if(n>1 && m>1) {
        rightways += maze(n,m-1);
        downways += maze(n-1,m);
    }
    int totalways = rightways + downways ;
    return totalways;
}
int main (){

    int r;
    printf("Enter number of rows of maze : ");
    scanf("%d",&r); 
    int c;
    printf("Enter number of columns of maze : ");
    scanf("%d",&c); 
    int x=maze(r,c);
    printf("For [%d * %d] maze the number of ways is %d .\n",r,c,x);
    return 0;
}