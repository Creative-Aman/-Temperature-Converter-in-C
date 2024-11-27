#include <stdio.h>
int main()
{
    float f, c;
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &f);
    c = (f - 32) * (5.0 / 9);
    printf("%.4f Fahrenheit in Degree Celsius is %.4f \n", f, c);

    return 0;
}
// Enter temperature in Fahrenheit : 54.3
// 54.3000 Fahrenheit in Degree Celsius is 12.3889