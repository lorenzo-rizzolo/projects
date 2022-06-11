#include <stdio.h>
#include <string.h>

main()
{
    int i, a, count;
    int vet[i];

    printf("vettore di 5 caratteri.\n");

    for(i=0;i<5;i++)
    {
        printf("inserire valore: ");
        scanf("%d", &vet[i]);
        a=vet[i];
        
        int f;
        f=i;
       

        for(i=0;i<f;i++)
        {
            
            if(a==vet[i])
            {
                count++;
                
            }
        }
        
    }
    if(count!=0)
    {
        printf("%d", 0);

    }
    else
    {
        printf("%d", 1);
    }
    

   
    
}