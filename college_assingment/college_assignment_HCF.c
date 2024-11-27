#include <stdio.h>
int main (){
    int n1,n2;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);
    int a=0;
    int b;
    for (int i=1;i<=n1;i++){
        if (n1%i==0 && n2%i==0){
            a++;
            b=i;
        }
    }
    if (a!=0){
        printf("The HCF of %d & %d is : %d",n1,n2,b);
    }
    else {
        printf("%d & %d don't have HCF .",n1,n2);
    }
    return 0;
}
// 1 warning generated.
// Enter 1st number : 8
// Enter 2nd number : 6
// The HCF of 8 & 6 is : 2