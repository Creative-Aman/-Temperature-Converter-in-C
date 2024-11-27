#include<stdio.h>
int main (){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int b=1;
    for (int i=1;i<=num;i++){
        for (int j=1;j<=i;j++){
            printf(" %d ",b);
            b++;
       }
       printf("\n");
    }
    return 0;
}
// Enter a number : 4
//  1
//  2  3
//  4  5  6
//  7  8  9  10