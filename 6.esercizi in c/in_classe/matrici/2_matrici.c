#include <stdio.h>

main()
{
    int l, i, num;
    int m[10][10];

    printf("inserire numero di celle in orizzontale: ");
    scanf("%d", &l);

    printf("\ninserire numero: ");
    scanf("%d", &num);
    
    for(i=0;i<l;i++)
    {
        m[i][i]=num;
    }
    
    for(i=0;i<l;i++)
    {
        if(m[i][i]==0)
        {
            printf("%d", 0);
        }
        else
        {
            printf("%d", m[i][i]);
        }

    }

}