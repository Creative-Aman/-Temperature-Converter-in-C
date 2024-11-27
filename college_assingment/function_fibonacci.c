#include <stdio.h>
int fibo(int x)
{
    int a=0,b=1,sum=0;
    printf(" %d  %d ",a,b);
    for (int i =0; i <= x; i++){
        sum=a+b;
        printf(" %d ",sum);
        a=b;
        b=sum;
    }
    
    return 0;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}