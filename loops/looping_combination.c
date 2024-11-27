#include <stdio.h>
int main (){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    int nfact=1;    
    int rfact=1;
    int nrfact=1;
    for (int i=2;i<=n;i++){
        nfact =nfact *i;
    }
    for (int j=2;j<=r;j++){
        rfact =rfact *j;
    }
    for (int k=2;k<=n-r;k++){
        nrfact =nrfact *k;
    }

    int ncr =nfact/(rfact*nrfact);
    printf(" %d ",ncr);
    return 0;
} 

// Enter n : 12
// Enter r : 6
//  924 