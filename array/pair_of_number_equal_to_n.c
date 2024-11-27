#include<stdio.h>
int main (){
    int n;
    int count =0; 
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[8]={1,2,3,4,5,6,7,8};
    for (int i=0;i<=7;i++){
        for (int j=i+1;j<=7;j++){
            if (arr[i]+arr[j]==n){
                if(arr[i]!=arr[j]){
                count++;
                printf("(%d,%d) .\n",arr[i],arr[j]);
                }
            }
        }
    }
    printf("%d no of pairs are greater than %d .\n",count ,n);
    return 0;
}