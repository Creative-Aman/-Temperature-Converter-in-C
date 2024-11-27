#include <stdio.h>
void fun(int a[], int x)
{
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
        {
            sum1 = sum1 + a[i];
        }
        else
        {
            sum2 += a[i];
        }
    }
    printf("Diffference between even and odd  indicis is : %d\n", sum1 - sum2);
}
int main()
{
    int a;
    printf("Enter size of array : ");
    scanf("%d", &a);
    // odd indexed element multiply by 2
    // even indexed element add 10
    int arr[a];
    for (int i = 1; i <= a; i++)
    {
        printf("Enter %d element : ", i);
        scanf("%d", &arr[i - 1]);
    }
    fun(arr, a);
    return 0;
}