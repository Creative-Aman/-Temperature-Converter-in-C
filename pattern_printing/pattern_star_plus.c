#include <stdio.h>
int main (){
    int num ;
printf("Enter a number : ");
scanf("%d",&num);
for (int i=1;i<=num;i++){
    for (int j=1;j<=num;j++){
    if (j==num/2+1 || i==num/2+1){
        printf(" * ");
    }
    else {
        printf("   ");
    }
    }
    printf("\n");
}
    return 0 ;
}
// Enter a number : 5
//        *
//        *
//  *  *  *  *  *
//        *
//        *