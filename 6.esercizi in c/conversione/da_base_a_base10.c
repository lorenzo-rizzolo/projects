#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int b, i, l, r, s=0, r2, e=0, n2, l2;
    char n[20] = {0,0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0 ,0 ,0 , 0, 0};

    printf("Inserire base del numero:  ");
    scanf("%d", &b);
    printf("Inserire il numero da convertire:  ");
    scanf("%s", n);
    l = strlen(n) - 1;
    
    for(i=l; i>=0 ;i--)
    {
        n2=n[i] - '0';
        if(n2-b < 1)
        {
            r = pow(b, e);
            r2 = n2*r;
            s = s + r2;
            e++;
        }
        else
        {
            printf("il numero non e' in base %d\n", b);
            return 1;
        }
    }
    printf("Numero convertito: %d\n", s);
    return 0;
}