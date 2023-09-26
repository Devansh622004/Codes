#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, p;
    printf("ENTER A NO.\n");
    scanf("%d", &a);

    b = sqrt(a);
    printf("THE SQUARE ROOT OF THE ENTERED NO. IS: %d\n", b);

    printf("***************************************************\n");

    b = pow(2, 3);
    printf("THE value AFTER USING pow() IS: %d\n", b);

    printf("***************************************************\n");

    b = ceil(2.3); // USED IN ROUNDING OFF ROUND OFF
    printf("THE value AFTER USING ceil() IS: %d\n", b);

    printf("***************************************************\n");

    b = floor(2.3);
    printf("THE value AFTER USING floor() IS: %d\n", b);
    
    printf("***************************************************\n");

    b = fabs(-23);
    printf("THE value AFTER USING fabs() IS: %d\n", b);

    printf("***************************************************\n");

    b = sin(1);
    printf("THE value AFTER USING fabs() IS: %d\n", b);

    printf("***************************************************\n");

    b = cos(1);
    printf("THE value AFTER USING fabs() IS: %d\n", b);

    printf("***************************************************\n");

    b = tan(1);
    printf("THE value AFTER USING fabs() IS: %d\n", b);

}