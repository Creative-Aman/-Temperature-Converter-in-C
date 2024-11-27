#include <stdio.h>
int main (){
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    int nst=1;
    for (int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            printf("   ");
        }
        for(int k=1;k<=nst;k++){
            printf(" * ");
        }
        nst=nst+2;
        printf("\n");
    }

    return 0;
}
// Enter a number : 5
//              *
//           *  *  *
//        *  *  *  *  *
//     *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *