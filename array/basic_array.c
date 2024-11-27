#include<stdio.h>
int main (){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
    printf("%d element is : %d \n",i+1,arr[i]);
    }

    return 0 ;
}