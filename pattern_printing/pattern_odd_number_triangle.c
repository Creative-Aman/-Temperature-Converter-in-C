#include <stdio.h>
int main (){
int num ;
printf("Enter a number : ");
scanf("%d",&num);
for (int i =1;i<=num ;i++){
     int a =1;
    for (int j =1;j<=i;j++){
        printf(" %d ",a);
        a=a+2;
    }
    printf ("\n");
}

    return 0 ;
}
// Enter a number : 6
//  1
//  1  3
//  1  3  5
//  1  3  5  7
//  1  3  5  7  9
//  1  3  5  7  9  11