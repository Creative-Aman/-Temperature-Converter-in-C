#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a =2;
    for (int i=1;i<=n;i++){
        printf(" %d ",a);
        a+=2;
    }
    return 0;
}
// Enter a number : 5
//  2  4  6  8  10 