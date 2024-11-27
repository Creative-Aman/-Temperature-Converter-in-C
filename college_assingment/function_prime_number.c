#include <stdio.h>
int prime(int x)
{
    int count = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d is prime .\n", x);
    }
    else
        printf("%d is not prime .\n",x);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    prime(n);
    return 0;
}