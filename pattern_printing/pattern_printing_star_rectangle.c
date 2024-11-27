#include <stdio.h>
int main (){
int row ,column;
printf("Enter number of rows : ");
scanf("%d",&row);
printf("Enter number of columns : ");
scanf("%d",&column);
// *************...........upto n number of stars .
for (int i =1;i<=column ;i++){//outer loop signify number of lines 
    for (int i=1 ;i<=row;i++){ //inner loop signif number of stars in each line 
    printf(" *");}printf("\n");
}

    return 0;
}
// Enter number of rows : 5
// Enter number of columns : 6
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *