#include <stdio.h>

main()
{
int pezzi, t, s;

printf("inserire numero prodotti: ");
scanf("%d", &pezzi);
t=5*pezzi;
if (t<30)
{
    printf("%d", t);
}
else if (t<50 && t>=30)
{
    s=t*10/100;
    t=t-s;
    printf("%d", t);
}
else if(t>=50)
{
    s=t*15/100;
    t=t-s;
    printf("%d", t);
}

}
