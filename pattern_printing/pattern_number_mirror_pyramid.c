#include <stdio.h>
int main (){
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        int a =i-1;
        for(int j=1;j<=num-i;j++){
            printf("   ");
        }
        for(int k=1;k<=i;k++){
            printf(" %d ",k);
        }
        for(int x=1;x<=i-1;x++){
            printf(" %d ",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}
// Enter a number : 5
//              1
//           1  2  1
//        1  2  3  2  1
//     1  2  3  4  3  2  1
//  1  2  3  4  5  4  3  2  1