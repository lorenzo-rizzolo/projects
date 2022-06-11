#include <stdio.h>

main()
{
    int v[2][3];
    int c, r,n=0 ,num;

  
    
    for(r=0;r<10;r++)
    {
        for(c=0;c<10;c++)
        {
            printf("inserire numero: ");
            scanf("%d", &num);
            if(num==0)
            {
                num=v[r][c];
            }
        }
        
    }

    for(r=0;r<10;r++)
    {
        for(c=0;c<10;c++)
        {
            
            printf("%d ", v[r][c]);

        }
        
        printf("\n");
    }
    

}