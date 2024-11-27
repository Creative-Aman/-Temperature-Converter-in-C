#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            for (int k = j + 1; k <= 7; k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    if (arr[i] != arr[j])
                    {
                        count++;
                        printf("(%d,%d,%d) .\n", arr[i], arr[j],arr[k]);
                    }
                }
            }
        }
    }
    printf("%d no of pairs are greater than %d .\n", count, n);
    return 0;
}