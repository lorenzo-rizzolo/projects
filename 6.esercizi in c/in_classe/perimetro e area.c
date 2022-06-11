#include <stdio.h>

main()
{
    int a, i, area, p, m;

    printf("1= quadrato\n2= rettangolo");
    printf("\ninserire numero: ");
    scanf("%d", &m);

    
    switch (m)
    {
        case 1:
        printf("inserire lato: ");
        scanf("%d", &a);
        area=a*a;
        printf("\narea= %d", area);
        p=a*4;
        printf("\nperimetro= %d", p);
        break;

        case 2:
        printf("inserire base: ");
        scanf("%d", &a);
        printf("inserire altezza: ");
        scanf("%d", &i);
        area=a*i;
        printf("\narea= %d", area);
        p=a*2+i*2;
        printf("perimetro= %d", p);
        break;

    }

   
}