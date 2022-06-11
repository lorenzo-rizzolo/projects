#include <stdio.h>
#include <math.h>

main()

{
    float a, b, c, area, perim;

    printf("inserire cateto1: ");
    scanf("%f", &a);

    printf("inserire impotenusa: ");
    scanf("%f", &b);

    c=sqrt(b*b-a*a);
    area= (c*a)/2;
    perim= c+b+a;

    printf("\narea= %f", area);
    printf("\nperimetro= %f", perim);
}