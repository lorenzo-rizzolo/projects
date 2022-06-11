#include <stdio.h>

main()
{
    float x,y,s,a;
    char scelta;
    a=1;

    while(a!=0)
    {
    
        printf("\ninserire 2 valori:");
        scanf("%f", &x);
        scanf("%c", &scelta);
        scanf("%f", &y);

        switch(scelta)
        {
            case '-':
            if(x-y<0)
        {
            s=y-x;
            printf("diventa %f-%f", y, x);
            printf("\nsottrazione= %f\n", s);
            break;
        } 
            else
        {
        s=x-y; 
        printf("sottrazione= %f\n", s);
        break;
        }
    
            case '+':
            s=x+y;
            printf("somma= %f\n", s);
            break;

            case '*':
            s=x*y;
            printf("moltiplicazione= %f\n", s);
            break;

            case '/':
            s=x/y;
            printf("divisione= %f\n", s);
            break;
        }    
    }
}