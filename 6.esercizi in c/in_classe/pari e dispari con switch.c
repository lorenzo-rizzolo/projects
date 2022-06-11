#include <stdio.h>

main()
{
    int num, a;
    a=1;

    while (a!=0)
    {
    printf("\nmettere un numero: ");
    scanf("%d", &num);
    switch (num)

    {
        case 1: printf("gennaio, e' inverno.");
            break;
        case 2: printf("febbraio, e' inverno.");
            break;
        case 3: printf("marzo, e' primavera.");
            break;
        case 4: printf("aprile, e' primavera.");
            break;
        case 5: printf("maggio, e' primavera.");
            break;
        case 6: printf("giugno, e' estate.");
            break;
        case 7: printf("luglio, e' estate.");
            break;
        case 8: printf("agosto, e' estate");
            break;
        case 9: printf("settembre, e' autunno.");
            break;
        case 10: printf("ottobre, e' autunno.");
            break;
        case 11: printf("novembre, e' autunno.");
            break;
        case 12: printf("dicembre, e' inverno.");
            break;
        default: printf("NON ESISTE !!!");
        break;
        
    }
    }
}