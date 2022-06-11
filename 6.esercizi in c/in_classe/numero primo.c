#include <stdio.h>

main()
{
    int n, i, cont, a;

    cont=0;
    a=1;

    
  while (a!=0)  
  {
    printf("\ninserire numero: ");
    scanf("%d", &n);

    
    i=2;

    while (i<n)
    {
        if (n%i==0)
        {
           cont++;
           i++;
        }
        else
        {
            i++;

        } 
       
    }
    if (cont==0)
    {
        printf("numero primo");

    }
    else
    {
        printf("nuemro non primo");
    }
  }
sleep(900);
}