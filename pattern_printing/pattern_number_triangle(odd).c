#include<stdio.h>
int main (){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int b=1;
    for (int i=1;i<=num;i++){
        for (int j=1;j<=i;j++){
            printf(" %d ",b);
            b=b+2;
       }
       printf("\n");
    }
    return 0;
}
// Enter a number : 5
//  1
//  3  5
//  7  9  11
//  13  15  17  19
//  21  23  25  27  29