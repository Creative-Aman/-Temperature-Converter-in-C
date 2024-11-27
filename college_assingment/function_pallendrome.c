#include<stdio.h>
int pal (int n){
    int sum=0;
    int original=n;
    int reminder;
    for(int i=1;n>0;i++){
        reminder = n%10;
        sum =sum*10+reminder;
        n=n/10;
    }     
    if (sum==original){
        printf("%d is pallendrome .\n",original);
    }
    else 
    printf("%d is not pallendrome .\n",original);
    return 0 ;
}
int main (){
    int n;
    printf("Enter number to check pallendrome : ");
    scanf("%d",&n);
    pal(n);
    

    return 0 ;
}