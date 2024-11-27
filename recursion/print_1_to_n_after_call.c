#include<stdio.h>
void vari(int n){    
    if(n==0) return ; //base case 
    // vari(n-1);//call
    // printf(" %d \n",n); //code
        // output 
//         Enter a number : 6
//  1 
//  2 
//  3 
//  4 
//  5 
//  6 
    printf(" %d \n",n); //code
    vari(n-1);//call
    // output 
//     Enter a number : 5
//  5 
//  4 
//  3 
//  2 
//  1 
    return ; 
}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    vari(n);
    return 0;
}