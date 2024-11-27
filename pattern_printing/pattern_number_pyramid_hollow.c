#include <stdio.h>
int main (){
    int n;
    printf("Enter a number for lines : ");
    scanf("%d",&n);
    int a =n;
    int b=1;
    int x=1;
    for (int i=1;i<=2*n+1;i++){
        if (i<=(2*n)/2){
            printf(" %d ",x);
            x++;}
        else{
            printf(" %d ",x);
            x--;
        }
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int c=1;
        for (int j=1;j<=a;j++){
            printf (" %d ",c);
            c++;
        }
        c--;
        for (int k=1;k<=b;k++){
            printf ("   ");
            
        }
        for (int j=1;j<=a;j++){
            printf (" %d ",c);
            c--;
        }
        a--;
        b+=2;
        printf("\n");
    }
    return 0;
}

// Enter a number for lines : 7 
//  1  2  3  4  5  6  7  8  7  6  5  4  3  2  1 
//  1  2  3  4  5  6  7     7  6  5  4  3  2  1 
//  1  2  3  4  5  6           6  5  4  3  2  1 
//  1  2  3  4  5                 5  4  3  2  1 
//  1  2  3  4                       4  3  2  1 
//  1  2  3                             3  2  1 
//  1  2                                   2  1 
//  1                                         1 