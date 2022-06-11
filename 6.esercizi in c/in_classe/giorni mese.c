#include <stdio.h>

main()
{
    char mese;

    printf("inserire mese: ");
    scanf("%c", &mese);

    switch (mese)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 12:
        case 10:
        printf("giorni= 31");
        break;

        case 'febbraio':
        printf("giorni= 28");
        break;

        case 'aprile':
        case 'giugno':
        case 'settembre':
        case 'novembre':
        printf("giorni= 30");
        break;
            
    }

}