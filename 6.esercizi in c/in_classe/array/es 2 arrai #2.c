#include <stdio.h>

main()
{
    char f[20];
    int i, l, a, c[i], b;
    
    printf("inserisci frase:  ");
    scanf("%s", f);
    l=strlen(f);
    printf("%d", l);

    c[i]=0;

    for(i=1;i<l;i++)
    {
        printf("%c", f[i]);
        a=f[i];
        switch(a)
        {
            case 'a': c[i]++; break; 
            case 'b': c[i]++; break;
            case 'c': c[i]++; break;
            case 'd': c[i]++; break;
            case 'e': c[i]++; break;
            case 'f': c[i]++; break;
            case 'g': c[i]++; break;
            case 'h': c[i]++; break;
            case 'i': c[i]++; break;
            case 'j': c[i]++; break;
            case 'k': c[i]++; break;
            case 'l': c[i]++; break;
            case 'm': c[i]++; break;
            case 'n': c[i]++; break;
            case 'o': c[i]++; break;
            case 'p': c[i]++; break;
            case 'q': c[i]++; break;
            case 'r': c[i]++; break;
            case 's': c[i]++; break;
            case 't': c[i]++; break;
            case 'u': c[i]++; break;
            case 'v': c[i]++; break;
            case 'w': c[i]++; break;
            case 'x': c[i]++; break;
            case 'y': c[i]++; break;
            case 'z': c[i]++; break;

        

        }
        c[i]=b;
        printf("%d", b);
        
    }
}