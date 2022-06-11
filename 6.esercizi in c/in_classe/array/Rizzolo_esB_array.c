#include <stdio.h>



int main()
{
    int i, n, vet[i];
    i=0;

    printf("inserire 8 numeri maggiori di 0.\n");

    while (i<=8)
    {
        
        printf("inserire numero: ");
        scanf("%d", &vet[i]);
        
        if (vet[i]>0)
        {
            
            i++;
        }
        else
        {
            
            printf("numero negativo\n");
            i--;
        }
        
        
    }
    
    
    
    
    return 0;
}