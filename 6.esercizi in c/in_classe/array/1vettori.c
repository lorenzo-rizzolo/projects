#include <stdio.h>
#include <string.h>

main()
{
    int i;
    int vet[i];
    int a, s=0;

    printf("il vettore e' composto da 5 numeri.\n");

    for(i=0;i<5;i++)
    {
        printf("inserire numero: ");
        scanf("%d", &vet[i]);
        a=vet[i];
        s=s+a;
    }
    printf("somma= %d", s);

    printf("\n");
    for(i=4;i>=0;i--)
    {
        
        printf("%d   ", vet[i]);
    }
    
}