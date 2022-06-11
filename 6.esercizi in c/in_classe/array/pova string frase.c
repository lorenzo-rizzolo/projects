#include <stdio.h>

main()
{
    char data[7]="marzo ";
    int g, i;

    for(i=0;i>=0;i++)
    {
        printf("\nche giorno e' ?  ");
        scanf("%d", &g);
        
        printf("%d", g);
        printf(" %s\n\n", data);

        if(g>31)
        {
            printf("\nGiorno inesistente.\n\n");
        }
    }

    
}