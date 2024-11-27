#include <stdio.h>
int main (){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int i=1;
    int a=0;
    while(i<=n){
        a+=3;
        i++;
    }
    printf("sum of %d consicutive multiple of 3 is %d .\n",n,a);
    return 0;
}
// Enter n : 4
// sum of 4 consicutive multiple of 3 is 12 .