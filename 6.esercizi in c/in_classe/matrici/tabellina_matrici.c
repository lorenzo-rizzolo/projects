#include <stdio.h>
#include <string.h>

main()
{
    int v[10][10], i=0, r=1, c=0;

    while(r<11)
    {S
        for(i=1;i<11;i++)
        {
            v[r][c]=r*i;
            printf("%d ", v[r][c]);
            c++;

        }
        printf("\n");
       
        r++;
    }
    
    
    


}