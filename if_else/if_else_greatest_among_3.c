#include <stdio.h>
int main (){
int a , b ,c ;
printf("Enter first number : ");
scanf("%d",&a);

printf("Enter second number : ");
scanf("%d",&b);

printf ("Enter third number : ");
scanf("%d",&c);

if (a>b){
    if (a>c){
        printf ("%d is the greatest .\n",a);
    }
    else {
        printf ("%d is the greatest .\n",c);
    }
}
else if (b>c){
    printf("%d is the greatest .\n",b);
}
else if (a==b && b==c){
    printf("All are same .\n");
}
else {
    printf ("%d is the greatest .\n",c);
}
    return 0 ;
}
// Enter first number : 45
// Enter second number : 35
// Enter third number : 65
// 65 is the greatest .