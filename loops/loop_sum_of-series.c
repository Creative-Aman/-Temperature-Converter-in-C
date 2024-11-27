#include<stdio.h>
int main (){
int a ;
printf("Enter a number : ");
scanf("%d",&a);
int sum =0 ;
for ( int i=1 ;i<=a ;i++){
if (i%2!=0) {
    sum=sum+i;
}
else sum=sum-i;

}printf("The sum is : %d",sum);
 
    return 0;
}

// Enter a number : 9
// The sum is : 5