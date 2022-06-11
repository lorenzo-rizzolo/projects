#include <stdio.h>

main()
{
    int a, b ,c;

    printf("questo programma controlla che tre numeri faccino parte di una terna pitagorica, \nad esempio se inseriamo 3, 4 e 5 si tratta di una terna pitagorica \nperche' 3 al quadrato + 4 al quadrato = 5 al quadrato ovvero 9+16 = 25\n");
    
    printf("inserire primo numero:    ");
    scanf("%d", &a);

    printf("inserire secondo numero:  ");
    scanf("%d", &b);

    printf("inserire terzo numero:    ");
    scanf("%d", &c);

    if (a*a+b*b==c*c)
    {
        printf("si tratta di una terna pitagorica.");
    }
    else if (a*a+b*b!=c*c)
    {
        printf("non si tratta di una terna pitagorica.");
    }
}