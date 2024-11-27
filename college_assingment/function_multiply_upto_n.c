#include<stdio.h>
int multi (int n){
    int multi=1;
    for(int i=1;i<=n;i++){
        multi=multi*i;
    }
    return multi ;
}
int main (){
    int n;
    int sum ;
    printf("Enter number in : ");
    scanf("%d",&n);
    sum= multi(n);
    printf("%d",sum);

    return 0 ;
}