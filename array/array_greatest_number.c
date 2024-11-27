#include<stdio.h>
int main (){
    int n;
    printf("Enter size for your array ; ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if (max<arr[i])
        max=arr[i];
    }
    printf("Greatest number among these is : %d\n",max);
    return 0;
}