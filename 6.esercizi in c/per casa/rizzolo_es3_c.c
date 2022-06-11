#include <stdio.h>

void main(void)

{
    int base;
    int altezza;
    float area;

    printf("inserire base:");
    scanf("%d", & base);

    printf("inserire altezza:");
    scanf("%d", & altezza);

    area=(float)(base*altezza);
    printf("area: %f", area);

    sleep(1000000000000000000000);

}