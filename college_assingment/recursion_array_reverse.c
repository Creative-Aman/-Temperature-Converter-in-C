#include<stdio.h>
int reverse (int n){
    int a[n];
    for (int i=0;i<n;i++){    
    printf("Enter %d element of array : ",i+1);
    scanf("%d",&a[i]);
    }
    for (int i=0, j=n-1;i<=j;i++,j--){
        a[i]=a[i]+a[j];
        a[j]=a[i]-a[j];
        a[i]=a[i]-a[j];
    }
    for (int i=0;i<n;i++){
        printf("%d element is : %d.\n",i+1,a[i]);
    }
    return 0;
}
int main (){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    
    reverse(n);

    return 0 ; 
}