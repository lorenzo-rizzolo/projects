#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
    char v[50];
    int l, i, vocali=0, consonanti=0 ;

    printf("inserire frase:  ");
    scanf("%s", v);

    l=strlen(v);
    for(i=0;i<l;i++)
    {
        
        if(v[i]==97)
        {
            vocali=vocali+1;
        }
        else if(v[i]==101)
        {
            vocali=vocali+1;
        }
        else if(v[i]==105)
        {
            vocali=vocali+1;
        }
        else if(v[i]==111)
        {
            vocali=vocali+1;
        }
        else if(v[i]==117)
        {
            vocali=vocali+1;
        }
        else
        {
            consonanti=consonanti+1;
        }
    }
    printf("vocali=%d  ", vocali);
    printf("consonanti=%d", consonanti);

}