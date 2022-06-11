#include <stdio.h>

main()
{
    int v[2][3];
    int c, r,n=0 ,num ,f;

    printf("scacchiera matrice.\n");
    
    for(r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            printf("inserire numero: ");
            scanf("%d", &num);
            if(num==0 || num==1)
            {
                f=c-1;
                if(num!=v[r][f])
                v[r][c]=num;
            }
            else
            { 
                printf("non e' una scacchiera.");
                return 0;
            }
        }
        
    }

    for(r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            
            printf("%d ", v[r][c]);

        }
        
        printf("\n");
    }
    

}