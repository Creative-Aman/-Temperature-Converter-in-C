#include <stdio.h>
int main (){
    int a ;
        printf ("Enter your number : ");
        scanf("%d",&a);
    if ( 5<a && 10 >a ){
        printf("number lies between 5 & 10 \n");
    }
    else {
        printf ("number doesn't lies between 5 & 10 \n");
    }
    return 0 ;
}
// Enter your number : 7
// number lies between 5 & 10 