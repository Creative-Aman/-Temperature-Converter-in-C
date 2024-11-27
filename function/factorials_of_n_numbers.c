#include<stdio.h>
void fact(int x){
    for(int i=1;i<=x;i++){
        int mult=1;
        for(int j=i;j>0;j--){
            mult=mult*j;
        }
        printf("%d ! = %d\n",i,mult);
        return ;
    }
}
int main (){
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);
    fact(a);
    return 0;

}