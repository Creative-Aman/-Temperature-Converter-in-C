#include <stdio.h>
int main()
{
    int n;
    printf("Enter size for your array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("Smallest number among these is : %d\n", min);
    return 0;
}