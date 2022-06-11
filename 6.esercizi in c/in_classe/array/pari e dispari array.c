#include <stdio.h>
#include <string.h>

main()
{
    int i=0, n, q, a=0, b=0;
    int v[2][10];

    printf("Quanti numeri si vogliono inserire? Digitare: ");
    scanf("%d", &q);

    if(q<=10)
    {
        for (i = 0; i < q; i++)
        {
            printf("inserire numero: ");
            scanf("%d", &n);
            
            if (n%2==0)
            {
                v[0][a]=n;
                v[1][b]=0;
                a++;
                b++;
            }
            else
            {
                v[1][b]=n;
                v[0][a]=0;
                b++;
                a++;
            }
            
        }
        
    }
    else
    {
        printf("Troppo grande");
    }
    
        for (a = 0; a < q; a++)
        {
            if(v[0][a]==0)
            {
                printf("");
            }
            else
            {
                 printf("%d  ", v[0][a]);
            }
           

        }
    for (b = 0; b < q; b++)
    {
        if(v[1][b]==0)
        {
            printf("");
        }
        else
        {
            printf("%d  ", v[1][b]);
        }
            
            

    }
    
    


}