#include <stdio.h>
int main (){
    int length , width , area , perimeter ;
        printf ("Enter length : ");
        scanf ("%d",&length);

        printf ("Enter width : ");
        scanf ("%d",&width);

        area = length * width ;
        perimeter = 2 * ( length + width );

        printf("Rectangle :\n");
        printf("Area : %d \n",area);
        printf("Perimeter : %d\n",perimeter);

    if (area > perimeter ){
        printf ("Area is greater than perimeter .");
    }
    else if (area == perimeter ){
        printf ("Area & perimeter are equal .");
    }
    else {
        printf ("Perimeter is greater than area .");
    }
    return 0;
}
// Enter length : 235
// Enter width : 24
// Rectangle :
// Area : 5640 
// Perimeter : 518
// Area is greater than perimeter 