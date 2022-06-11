#include <stdio.h>

main()
{
 
int pezzi, t, s, m;




while(pezzi!=0)
{

printf("inserire numero prodotti: ");
scanf("%d", &pezzi);
t=5*pezzi;
m=m+t;

} 
if (t<30)
{
    printf("%d", m);
}
else if (m<50 && m>=30)
{
    s=m*10/100;
    m=m-s;
    printf("%d", m);
}
else if(m>=50)
{
    s=m*15/100;
    m=m-s;
    printf("%d", m);
}

    sleep(900);
}

