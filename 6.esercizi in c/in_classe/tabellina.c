#include <stdio.h>

main()
{
    int a, i, m;

    i=1;
    a=1;

    while(a!=11)
    {
        while(i!=11)
        {
            m=a*i;
            i++;
            printf("%d ", m);
           
        }
        a++;
        i=1;
        printf("\n");
    }
}