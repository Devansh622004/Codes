#include <stdio.h>

int main()
{
    float pi = 3.14;
    float radius;
    printf("what is the radius of this circle\n");
    scanf("%f", &radius);

    printf("the perimeter of this circle is %f\n", 2*pi*radius);

    return 0;
}