#include <stdio.h>

main()
{
    char frase[]="coding creativo";
    int i=0;
    while (frase[i]!='\0')
    {
        printf("%c", frase[i]);
        i++;
    }
}