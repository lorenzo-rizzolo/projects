#include <stdio.h>

main()
{
    float b, m=0, n, s=0, a, i=0;

    printf("il numero e' compresto tra ");
    scanf("%f", &a);
    printf("e ");
    scanf("%f", &b);

    n=a+1;

    
    
        while (n>=a && n<=b && i!=2)
        {
            printf("inserire valore: ");
            scanf("%f", &n);
            s=s+n;
            i++;
            
        }

    
    m=s/i;
    printf("media= %f", m);
    printf("\nsomma= %f", s);
}