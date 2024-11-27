#include <stdio.h>
int main (){
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        int a =64+(i-1);
        char ax=(char)a;
        int d =65;
        char ch=(char)d;
        for(int j=1;j<=num-i;j++){
            printf("   ");
        }
        for(int k=1;k<=i;k++){
            printf(" %c ",ch);
            ch++;
        }
        for(int x=1;x<=i-1;x++){
            printf(" %c ",ax);
            ax--;
        }
        printf("\n");
    }
    return 0;
}

// Enter a number : 3
//        A 
//     A  B  A 
//  A  B  C  B  A 