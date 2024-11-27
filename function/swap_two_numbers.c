#include<stdio.h>
void swap(int * a,int * b ){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main (){
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);

    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    swap(&a,&b);
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);

    return 0;
}