#include <stdio.h>
#include <string.h>

main()
{
    char s[30];
    int i, a=0, l;
    char b[122];

    for(i=0;i<=122;i++)
    {
        b[i]=0;
    }
   
    printf("inserire la parola:  ");
   
    scanf("%s", s);
    
    l=strlen(s);

    for(i=0;i<=l;i++)
    {
        b[s[i]]++;

    }
    /*for (i=0;i<l;i++)
    {
        printf("%c=", s[i]);
        printf("%d\n", b[s[i]]);
    }*/
    
    for(i=97;i<=122;i++)
    {
        if(b[i]!=0)
        {
            printf("%c=", i);
            printf("%d\n", b[i]);
        }
       
    }

}
