#include <stdio.h>

main()
{
    int v[2][3];
    int c, r, tr, tc;

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

}