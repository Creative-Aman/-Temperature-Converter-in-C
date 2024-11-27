#include <stdio.h>
int main (){
    int n1 ,n2;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);
    int a=0;
    int i=n1*n2;
    int x;
    while (i>1){
        if (i%n1==0 && i%n2==0){
            a++;
            x=i;
        }
        i--;
    }
    if (a!=0){
        printf("%d is the LCM of %d & %d .",x,n1,n2);
    }
    else 
    printf("%d & %d has no LCM .",n1,n2);
    return 0;
}
// Enter 1st number : 56
// Enter 2nd number : 32
// 224 is the LCM of 56 & 32 .