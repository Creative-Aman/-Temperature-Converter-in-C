#include <stdio.h>
int main (){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int p=n;
    int s =0;
    int r ;
    while (n>0){
        r= n%10;
        s = s*10+r;
        n=n/10;
    }
    if (p==s){
        printf("%d is palindrome .\n",p);
    }
    else {
        printf ("%d is not palindrome .\n",p);
    }
    return 0;
}
// Enter n : 13331
// 13331 is palindrome .