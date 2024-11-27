#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r,b=1,m,sum=0;
    while (n>0){
        r=n%2;
        m=b*r;
        sum=sum+m;
        n=n/2;
        b=b*10;
    }
    printf ("The binary form is : %d",sum);
    return 0;
}
// Enter a number : 56
// The binary form is : 111000