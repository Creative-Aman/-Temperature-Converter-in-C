#include<stdio.h>
int maze(int cr ,int cc, int er,int ec){
    int rightways =0;
    int downways =0;
    if (cr==er && cc==ec) return 1;
    if(cr==er){ // only rightways call
        rightways +=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){ // only downways call 
        downways += maze(cr+1,cc,er,ec);
    }
    if (cr<er && cc<ec){
        rightways =maze(cr,cc+1,er,ec);
        downways = maze(cr+1,cc,er,ec);
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
    int x=maze(1,1,r,c);
    printf("For [%d * %d] maze %d is the number of ways .\n",r,c,x);
    return 0;
}