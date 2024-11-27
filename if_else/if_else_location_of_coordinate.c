#include <stdio.h>
int main (){
int x , y ;
printf ("Enter coordinates : ");
scanf("%d %d",&x,&y);

if (x==0 && y==0){
    printf ("Point lies on origin .\n");
}
else if (y==0){
    printf ("Point lies on x axis .\n ");
}
else if (x==0){
    printf("Point lies on y axis .\n");
}
else {
    printf("Point don't lie on x axis or on y axis or on origin .\n");
}
    return 0 ;
}
// Enter coordinates : 657
// 234
// Point don't lie on x axis or on y axis or on origin .