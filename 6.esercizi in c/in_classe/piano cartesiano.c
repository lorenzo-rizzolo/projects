#include <stdio.h>

main()
{
    float x1, x2, y1, y2, d, p;

    printf("inserire le coordinate del primo punto:  ");
    scanf("%f %f", &x1, &y1);

    printf("inserire le coordinate del secondo punto:  ");
    scanf("%f %f", &x2, &y2);

    p=pow(x1-x2,2)+pow(y1-y2,2);
    d=sqrt(p);
    printf("distanza tra i due punti= %f", d);

}