#include<stdio.h>
int matix(int a,int b){
    int m[a][b];
    int x=1;
    int sum1=0;
    int sum2=0;
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter %d element of array : ",x);
            scanf("%d",&m[i][j]);
            x++;
        }
    }
    printf("Your entered matrix :\n");
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<a;i++){
        int sum =0;
        for(int j=0;j<b;j++){
            sum =sum +m[i][j];
            sum2=sum2+m[i][j];
        }
        printf("Sum of %d row elements : %d.\n",i+1,sum);
    }
    for (int i=0;i<a;i++){
        int sum =0;
        for(int j=0;j<b;j++){
            sum =sum +m[j][i];
        }
        printf("Sum of %d column elements : %d.\n",i+1,sum);
    }
    for (int i=0;i<a;i++){
        int sum =0;
        for(int j=0;j<b;j++){
            if (i==j)
            sum1 =sum1 +m[i][j];
        }
    }
    printf("Sum of digonal elements is : %d.\n",sum1);
    printf("Sum of all elements is : %d.\n",sum2 );
    return 0;
}
int main (){
    int i,j;
    printf("Enter no of rows of array : ");
    scanf("%d",&i);
    printf("Enter no of columns of array : ");
    scanf("%d",&j);
    matix(i,j);
    return 0;
}