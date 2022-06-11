#include <stdio.h>

main()
{
   int a, b, c;
   

    printf("inserire i lati:\n");
  
    printf("lato 1= ");
    scanf("%d", &a);

    printf("lato 2= ");
    scanf("%d", &b);

    printf("lato 3= ");
    scanf("%d", &c);
   
    while(a!=0 && b!=0 && c!=0)
    {
        if (a!=b && b!=c && c!=a)
        {
             printf("triangolo scaleno");
             a=0;
             
             
        }
        else if ((a==b && c!=a) || (a==c && b!=a) || (c==b && a!=b))
        {
            printf("triangolo isoscele.");
            a=0;
         
        }
        else if (a==b && a==c)
        {
            printf("triangolo equilatero.");
            a=0;
            
        }
    }

    sleep(10);
}