#include <stdio.h>
int main (){
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    int number =1;
    for (int i=1;i<=num;i++){
        int x =65;
        char ch =(char)x;
        for (int j=1;j<=num-i;j++){
            printf("   ");
        }
        for (int k=1;k<=number;k++){
            printf(" %c ",ch);
            ch++;
        }
        number =number +2;
        printf("\n");
    }

    return 0;
}

// Enter a number : 7
//                    A 
//                 A  B  C 
//              A  B  C  D  E 
//           A  B  C  D  E  F  G 
//        A  B  C  D  E  F  G  H  I 
//     A  B  C  D  E  F  G  H  I  J  K 
//  A  B  C  D  E  F  G  H  I  J  K  L  M 