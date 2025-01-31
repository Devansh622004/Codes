#include <stdio.h>

int main()
{
    float pi = 3.14;
    float r;
    printf("what is the value of r of circle\n");
    scanf("%f", &r);
    
    printf("the area of your circle is %f\n", pi*r*r);

    printf("the circumference of your circle is %f\n", 2*pi*r);

    return 0;
}