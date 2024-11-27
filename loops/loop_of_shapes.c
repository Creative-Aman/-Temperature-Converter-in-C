#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

void calculaterectangle();
void calculatesquare();
void calculatecircle();

int main ()
{
int choice;
do {
printf ("Choose your shape \n");
printf ("1. Rectangle \n");
printf ("2. Square \n");
printf ("3. Circle \n");
printf ("0. Exit\n");
printf ("Enter your choice : ");
scanf("%d",&choice);
 

 switch (choice)
{
case 1:
calculaterectangle();
break;
case 2:
calculatesquare();
break;
case 3:
calculatecircle();
break;
case 0:
printf("Exiting.... \n");
break;
default:
printf("Invalid chioce . Please try again \n");

 }
}
 while(choice !=0);
 return 0;
}

void calculaterectangle ()
{
    float length , width , area , perimeter ;
printf("Enter length = ");
scanf ("%f",&length) ;
printf("Enter width = ");
scanf ("%f",&width) ;
area =length * width ;
perimeter = 2*(length +width );
printf("Rectangle \n");
printf("Area : %.2f\n",area);
printf("Perimeter : %.2f\n",perimeter);
}
void calculatesquare()
{
float length , area , perimeter ;
printf ("Enter length = ");
scanf("%f",&length);
area = length *length ;
perimeter = 4* length ;
printf ("Square :\n");
printf ("Area : %.2f\n",area);
printf("Perimeter : %.2f\n",perimeter);
}
void calculatecircle()
{
float radius , area , circumference ;
printf("Enter radius : ");
scanf ("%f",&radius);
area = PI * radius *radius ;
circumference = 2 * PI * radius ;
printf ("Circle :\n");
printf("Area = %.2f\n",area);
printf("Circumference = %.2f\n",circumference);
}

// Choose your shape 
// 1. Rectangle 
// 2. Square 
// 3. Circle 
// 0. Exit
// Enter your choice : 2
// Enter length = 56
// Square :
// Area : 3136.00
// Perimeter : 224.00
// Choose your shape 
// 1. Rectangle 
// 2. Square 
// 3. Circle 
// 0. Exit
// Enter your choice : 0
// Exiting.... 