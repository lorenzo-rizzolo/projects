#include <stdio.h>

main()
{
    int a;

    scanf("%d", &a);

    if (a%4==0)
    {
        printf("anno bisestile.");
    }
    else
    {
        printf("anno non bisestile.");
    }
    sleep(900);
}