#include <stdio.h>63

main()
{
    int a, b;

    printf("inserire due numeri: \n");
    
    printf("primo numero: ");
    scanf("%d", &a);

    printf("secondo numero numero: ");
    scanf("%d", &b);

    if (a%b==0)
    {
        printf("a multiplo di b.");

    }
    else 
    {
        printf("a non e' un multiplo di b.");
    }

    sleep(10);
}