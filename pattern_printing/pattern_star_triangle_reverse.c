#include <stdio.h>
int main (){
    int num ;
    printf("Enter number of lines : ");
    scanf("%d",&num);
    int nsp=0 , nst=num;
    for (int i=1;i<=num;i++){
        
        for(int j=1;j<=nsp;j++){
            printf("   ");
        }
        for (int k=1;k<=nst;k++){
            printf(" * ");
        }
        nsp++;
        nst--;
        printf("\n");
    }

    return 0;
}
// Enter number of lines : 5
//  *  *  *  *  *
//     *  *  *  *
//        *  *  *
//           *  *
//              *