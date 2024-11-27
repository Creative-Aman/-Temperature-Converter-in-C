#include<stdio.h>
int main (){
    int a;
    printf("Enter number of elements you want to print : ");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=a-1;j>=0;j--){
        printf("%d element : %d\n",j+1,arr[j]);
    }
    return 0;
}