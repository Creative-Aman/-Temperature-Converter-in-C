#include <stdio.h>
int main (){
int num;
printf("Enter a number : ");
scanf("%d",&num);
for (int i=1;i<=num;i++){
    for(int j=1;j<=i;j++){
        printf(" %d ",j);
    }
    printf("\n");
}
    return 0;
}
// Enter a number : 6
//  1
//  1  2
//  1  2  3
//  1  2  3  4
//  1  2  3  4  5
//  1  2  3  4  5  6