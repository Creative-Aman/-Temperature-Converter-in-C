#include <stdio.h>
int main (){
int a ,b ,c;
printf ("Enter Ram's age : ");
scanf("%d",&a);
printf ("Enter Shyam's age : ");
scanf("%d",&b);
printf ("Enter Ajay's age ");
scanf("%d",&c);

if (a<b && a<c){
    printf ("Ram is the youngest .\n");
}
else if (b<a && b<c){
    printf ("Shyam is the youngest .\n");
}
else {
    printf ("Ajay is the youngest .\n");
}
    return 0 ;
}
// Enter Ram's age : 33
// Enter Shyam's age : 46
// Enter Ajay's age 13
// Ajay is the youngest .