#include <stdio.h>
int main (){
int num ;
printf("Enter a number : ");
scanf("%d",&num);
for(int i =1;i<=num;i++){
    int a =1;
    for (int j=1;j<=num;j++){
        int d =a+64;
        char ch=(char)d;
        printf(" %c ",ch);
        a++;
    }
    printf("\n");
}

    return 0 ;
}

// Enter a number : 6
//  A  B  C  D  E  F 
//  A  B  C  D  E  F 
//  A  B  C  D  E  F 
//  A  B  C  D  E  F 
//  A  B  C  D  E  F 
//  A  B  C  D  E  F 