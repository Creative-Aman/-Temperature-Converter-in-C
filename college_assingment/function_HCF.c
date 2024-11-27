#include<stdio.h>
int hcf (int n1,int n2){
    int a=0;
    int b;
    for(int i=1;i<=n1;i++){
        if (n1%i==0 && n2%i==0){
            a++;
            b=i;
        }
    }     
    if (a!=0){
        printf("HCF of %d & %d is : %d\n",n1,n2,b);
    }
    else {
        printf("HCF of %d & %d is : 1.\n",n1,n2);
    }
    return 0;
}
int main (){
    int n1,n2;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 1st number : ");
    scanf("%d",&n2);
    hcf(n1,n2);
    

    return 0 ;
}