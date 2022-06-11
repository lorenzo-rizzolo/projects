#include <stdio.h>

void main(void)

{
    int l;
    float perimetro;
    float area;

    printf("inserire lato:");
    scanf("%d", & l);
    
    area=(float)(l*l);
    printf("area= %f\n", area);

    perimetro=(float)(l*4);
    printf("perimetro= %f", perimetro);

    sleep(1000000000000000000000);

}