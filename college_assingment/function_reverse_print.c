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
    printf("Reverse of %d is :%d .\n",original,sum);
    return 0;
}
int main (){
    int n;
    printf("Enter number to reverse it : ");
    scanf("%d",&n);
    pal(n);
    

    return 0 ;
}