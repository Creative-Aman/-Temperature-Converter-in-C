#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter no of rows of array : ");
    scanf("%d", &x);
    printf("Enter no of columns of array : ");
    scanf("%d", &y);
    int a[x][y];
    int p=x,q=y;
    int reverse[p][q];
    printf("Enter elements of array : \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = x-1; i>=0; i--)
    {
        for (int j = y-1; j>=0; j--)
        {
            reverse [x-i-1][y-j-1]=a[i][j];
        }
    }
    printf("Matirx :\n");
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Reverse of matrix is :\n");
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf(" %d ",reverse[i][j]);
        }
        printf("\n");
    }

    return 0;
}