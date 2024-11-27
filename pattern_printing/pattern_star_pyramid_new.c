#include <stdio.h>
int main (){
    int num ;
    printf("Enter number of lines : ");
    scanf("%d",&num);
    int nst=num;
    int nsp=1;
    for(int i=1;i<=2*num+1;i++){
        printf(" * ");
    }
    printf("\n");
    for (int i=1;i<=num;i++){
        for (int j=1;j<=nst;j++){
            printf(" * ");
        }
        for (int k=1;k<=nsp;k++){
            printf("   ");
        }
        for (int j=1;j<=nst;j++){
            printf(" * ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}
// Enter number of lines : 5
//  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *     *  *  *  *  *
//  *  *  *  *           *  *  *  *
//  *  *  *                 *  *  *
//  *  *                       *  *
//  *                             *