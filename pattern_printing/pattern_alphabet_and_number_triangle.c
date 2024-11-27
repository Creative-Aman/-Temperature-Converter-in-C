#include <stdio.h>
int main (){
int num;
printf("Enter a number : ");
scanf("%d",&num);
for (int i=1;i<=num;i++){
    int a=1;
    if (i%2==0){
    for (int j=1;j<=i;j++){
        int d=a+64;
        char ch=(char)d;
        printf(" %c ",ch);
        a++;
    }
    }
    else {
    for (int j=1;j<=i;j++){
        printf(" %d ",j);
        a++;
    }
    }
    printf("\n");
}
    return 0 ;
}

// Enter a number : 5
//  1 
//  A  B 
//  1  2  3 
//  A  B  C  D 
//  1  2  3  4  5 