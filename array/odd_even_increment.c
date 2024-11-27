#include<stdio.h>
void fun (int a[],int x){
    for (int i=0;i<x;i++){
        if (i%2==0){
            a[i]=a[i]*2;
        }
        else{
            a[i]=a[i]+10;
        }
    printf("%d element is : %d\n",i+1,a[i]);    
    }
}
int main (){
    int a;
    printf("Enter size of array : ");
    scanf("%d",&a);
    // odd indexed element multiply by 2 
    // even indexed element add 10
    int arr[a];
    for(int i=1;i<=a;i++){
    printf("Enter %d element : ",i);
    scanf("%d",&arr[i-1]);
    }
    for(int i=1;i<=a;i++){
    printf("Your %d element :%d\n",i,arr[i-1]);
    }
    fun(arr,a);
    return 0 ;
}