#include <stdio.h>

main()
{
    int i;
    int v[i], r[i];

    for(i=0;i<5;i++)
    {
        
        printf("inserire valore: ");
        scanf("%d", &v[i]);
        
        int a;
        a=v[i];
        if(a>=0 && a<=100)
        {
            
            r[i]=a*a;
        }
        else{
            r[i]=0;
        }

        
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t", r[i]);
    }
}