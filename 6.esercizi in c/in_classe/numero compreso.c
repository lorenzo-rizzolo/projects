#include <stdio.h>

main()
{
    float x;

    printf("inserire primo numero: ");
    scanf("%f", &x);


    if (x>=5 && x<=10)
    {
        printf("compreso tra 5 e 10");
    }
     else  {
         printf("non compreso tra 5 e 10");
     }

}