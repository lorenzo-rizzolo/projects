#include <stdio.h>
#include <ctype.h>

main()
{
    char v[50];

    printf("inserisci parola da convertire: ");
    fgets(v, sizeof(v), stdin);
    v[]=toupper(v);
    printf("parola: ");
    puts(v);
}