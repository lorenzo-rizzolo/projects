#include <stdio.h>
#include <string.h>

main()
{
    int v[2][2], r=0, c=0,n,m;

    printf("i valori vanno inseriti tra ");
    scanf("%d", &n);
    printf("e ");
    scanf("%d", &m);

    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("Inserire valore inv[%d][%d]:  ", r, c);
            scanf("%d", &v[r][c]);
            if(v[r][c]<n || v[r][c]>m)
            {
                v[r][c]=0;
            }
        }
    }

    for(r=0;r<2;r++)//out
    {
        for(c=0;c<2;c++)
        {
            printf("%d  ", v[r][c]);
            
        }
        printf("\n");
    }

    
    
    
    


}