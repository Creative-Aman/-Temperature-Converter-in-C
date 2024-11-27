#include<stdio.h>
int main (){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i=1;i<=n-1;i++){
        if (n%i==0){
            printf("Number is not prime number .\n");
            break;
        }
        else {
            printf("Number is a prime number .\n");
            break;
        }       
    }
    return 0;
}

// Enter a number : 6709
// Number is not prime number .