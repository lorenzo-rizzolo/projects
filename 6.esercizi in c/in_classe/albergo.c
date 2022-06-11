#include <stdio.h>

main()
{
    int giorni, piano, a, costo;
    a=1;

    while (a!=0)
    {
        printf("\ninserire il numero di giorni: ");
        scanf("%d", & giorni);
        printf("inserire il piano dell'albergo: ");
        scanf("%d", & piano);

        switch (piano)
        {
            case 1:
                costo = 35*giorni;
                printf("%d", costo);
                break;

            case 2:
                costo = 45*giorni;
                printf("%d", costo);
                break;

            case 3:
                costo = 55*giorni;
                printf("%d", costo);
                break;

            case 4:
                costo = 65*giorni;
                printf("%d", costo);
                break;
            
            default: 
                printf("qualunque");
                break;
        }

    }
      
    
}