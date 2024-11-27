#include <stdio.h>
int main (){
    int num ;
    printf("Enter a number ; ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        int d =65; 
        char ch=(char)d;
        for (int j=1;j<=num-i;j++){
            printf("   ");
        }
        for (int k=1;k<=i;k++){
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");
    }


    return 0;
}
// Enter a number ; 9
//                          A 
//                       A  B 
//                    A  B  C 
//                 A  B  C  D 
//              A  B  C  D  E 
//           A  B  C  D  E  F 
//        A  B  C  D  E  F  G 
//     A  B  C  D  E  F  G  H 
//  A  B  C  D  E  F  G  H  I 