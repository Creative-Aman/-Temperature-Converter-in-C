#include <stdio.h>
int main (){
    int number ;
   
printf("Enter a number : ");
scanf("%d",&number);
for (int i=1;i<=number;i++){
for (int j=1;j<=number;j++){
    printf("%d ",j);
}printf("\n");}
    return 0;
}
// Enter a number : 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6