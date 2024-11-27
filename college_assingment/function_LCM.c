#include<stdio.h>
int lcm (int n1,int n2){
    int a=0;
    int b;
    for(int i=n1*n2;i>=n1;i--){
        if (i%n1==0 && i%n2==0){
            a++;
            b=i;
        }
    }     
    if (a!=0){
        printf("LCM of %d & %d is : %d\n",n1,n2,b);
    }
    else {
        printf("LCM of %d & %d is : 1.\n",n1,n2);
    }
    return 0;
}
int main (){
    int n1,n2;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 1st number : ");
    scanf("%d",&n2);
    lcm(n1,n2);
    

    return 0 ;
}