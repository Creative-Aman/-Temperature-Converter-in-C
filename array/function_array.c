#include<stdio.h>
void fun (int a[]){
    int temp;
    temp=a[0];
    a[0]=a[1];
    a[1]=temp;
    return ;
}
int main (){
    int arr[5]={1,2,3,4,5};
    printf(" %d %d\n",arr[0],arr[1]);
    fun(arr);
    printf(" %d %d\n",arr[0],arr[1]);
    return 0;
}