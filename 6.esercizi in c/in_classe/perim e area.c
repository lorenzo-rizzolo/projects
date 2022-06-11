#include <stdio.h>

main()
{
    int a, b, c;

    printf("inserire 3 numeri: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    while(a>b && a>c ) // casistica di a maggiore
    {
        if (b>c)
        {
            printf("ordine decrescente: \n");
            printf("%d\n", c);
            printf("%d\n", b);
            printf("%d\n", a);
            
        }
        else
        {
            printf("ordine decrescente: \n");
            printf("%d", a);
            printf("%d", c);
            printf("%d", b); 
        }
        sleep(9000);
    }

    while(b>a && b>c ) // casistica di b maggiore
    {
        if (a>c)
        {
            printf("ordine decrescente: \n");
            printf("%d\n", c);
            printf("%d\n", a);
            printf("%d\n", b);
            
        }
        else
        {
            printf("ordine decrescente: \n");
            printf("%d", b);
            printf("%d", a);
            printf("%d", c); 
        }
        sleep(9000);
    }

    while(c>b && a<c ) // casistica di c maggiore
    {
        if (b>a)
        {
            printf("ordine decrescente: \n");
            printf("%d\n", a);
            printf("%d\n", b);
            printf("%d\n", c);
            
        }
        else
        {
            printf("ordine decrescente: \n");
            printf("%d", b);
            printf("%d", a);
            printf("%d", c); 
        }
        sleep(9000);
    }

}