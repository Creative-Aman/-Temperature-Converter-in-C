#include<stdio.h>
int main (){
    int a=5;
    int* x =&a; // int * --> stores int address
    *x =7; // a is changed
    int **y=&x; // int** --> stores int* address
    printf("%d\n",a);
    printf("%d\n",*x);//%d is to print address 
    printf("%d\n",**y); 
    return 0;
} 