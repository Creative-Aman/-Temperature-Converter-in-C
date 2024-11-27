#include <stdio.h>
int main (){
    int n ;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    int a =n;
    int b=1;
    int x=65;
    for (int i=1 ;i<=2*n+1;i++){
        
        char ch=(char)x;
        printf(" %c ",ch);
        x++;
    }
    printf("\n");
    
    for (int i=1;i<=n;i++){
        int c=65;
        char ch=(char)c;
        for (int j=1;j<=a;j++){
            printf(" %c ",ch);
            ch++;
        }
        for (int k=1;k<=b;k++){
            printf("   ");
            ch++;
        }
        for (int j=1;j<=a;j++){
            printf(" %c ",ch);
            ch++;
        }
        a--;
        b+=2;
        printf("\n");
    }
    return 0;
}

// Enter number of lines : 9
//  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S 
//  A  B  C  D  E  F  G  H  I     K  L  M  N  O  P  Q  R  S 
//  A  B  C  D  E  F  G  H           L  M  N  O  P  Q  R  S 
//  A  B  C  D  E  F  G                 M  N  O  P  Q  R  S 
//  A  B  C  D  E  F                       N  O  P  Q  R  S 
//  A  B  C  D  E                             O  P  Q  R  S 
//  A  B  C  D                                   P  Q  R  S 
//  A  B  C                                         Q  R  S 
//  A  B                                               R  S 
//  A                                                     S 