#include <stdio.h>
int main (){
    int row ,column;
        printf("Enter number of rows : ");
        scanf("%d",&row);
        printf("Enter number of columns : ");
        scanf("%d",&column);
        for (int i=1;i<=row;i++){
            for (int j=1;j<=column;j++){
                if (j==column || j==column-(column-1) || i==row || i==row-(row-1)){
                    printf(" * ");
                }
                else {
                    printf("   ");
                }        
            }
            printf("\n");
        }
    return 0;
}

// Enter number of rows : 6
// Enter number of columns : 7
//  *  *  *  *  *  *  * 
//  *                 * 
//  *                 * 
//  *                 * 
//  *                 * 
//  *  *  *  *  *  *  * 