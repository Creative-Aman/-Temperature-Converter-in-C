#include<stdio.h>
int main (){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for (int i=0;i<n;i++){
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
        sum =sum+arr[i];
    }
    printf("Sum of these numbers  are : %d ",sum );
    return 0;
}