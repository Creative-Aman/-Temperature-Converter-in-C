#include <stdio.h>
int main (){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i =n-1;
    int a=1;
    while (i>1){
        if (n%i==0){
            a++;
        }
        i--;
    }
        if (a==1)
    printf("%d is prime .",n);
    else {
        printf("%d is not prime .",n);
    }
    return 0;
}
// Enter a number : 5
// 5 is prime .           