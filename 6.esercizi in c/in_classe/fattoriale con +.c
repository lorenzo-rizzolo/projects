#include <stdio.h>

main()
{
    int a,i,s,s2;
    s2=1;

    printf("inserire numero: ");
    scanf("%d", &a);

    for(i=1;i<=a;i++)
    {
        
        s=s+i;
        s2=s2*i;
        
    }
    printf("somma= %d", s);
    printf("\nsomma= %d", s2);

    sleep(90);

}