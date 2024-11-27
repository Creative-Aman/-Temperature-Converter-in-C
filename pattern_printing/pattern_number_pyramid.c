#include <stdio.h>
int main (){
    int num;
    printf("Enter a number ; ");
    scanf("%d",&num);
    int number =1;
    for (int i =1;i<=num;i++){
        for (int j=1;j<=num-i;j++){
            printf("   ");
        }
        for (int k=1;k<=number;k++){
            printf(" %d ",k);
        }
        number =number +2 ;
        printf("\n");
    }

    return 0;
}
// Enter a number ; 5
//              1
//           1  2  3
//        1  2  3  4  5
//     1  2  3  4  5  6  7
//  1  2  3  4  5  6  7  8  9