#include <stdio.h>

main()
{
    int v[2][3];
    int c, r, tr, tc,n=0;

    printf("inserire dimensioni matrice.\n");
    printf("righe:  ");
    scanf("%d", &tr);
    printf("colonne:  ");
    scanf("%d", &tc);
    
    for(r=0;r<tr;r++)
    {
        for(c=0;c<tc;c++)
        {
            printf("inserire numero: ");
            scanf("%d", &v[r][c]);
            if(v[r][c]==0)
            {
                n++;
            }
        }
        
    }

    for(r=0;r<tr;r++)
    {
        for(c=0;c<tc;c++)
        {
            
            printf("%d ", v[r][c]);

        }
        
        printf("\n");
    }
    printf("numero di zeri: %d", n);

}