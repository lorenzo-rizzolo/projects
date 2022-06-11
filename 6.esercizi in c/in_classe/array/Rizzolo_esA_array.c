#include <stdio.h>


int main()
{
    int i=0;
    int vet[i], n, cubo[i], q[i];
    int pippo;
    int cubo1;
    

    printf("questo programma permette di stampare a video il quadrato ed il cubo.\n");
    printf("quanti numeri si vogliono inserire? ");
    scanf("%d", &n);

    while (i!=n)
    {
        scanf("%d", &vet[i]);
        int vet2=vet[i];
        q[i]=vet2*vet2;
        pippo=q[i];
        printf("%d", pippo);
        cubo[i]=pippo*vet2;
        int cubo1=cubo[i];
        printf(" %d", cubo1);
        printf("\n");
        i++;
        
        
    }

    printf("I quadrati dei numeri sono: ");
    i=0;
    while (i!=n)
    {
        int pippo;
        pippo=q[i];
        printf("pippo vale %d", pippo);
        printf(" ");
        i++;
    }
    
    printf("\nI cubi dei numeri sono: ");
    
    i=0;
    while (i!=n)
    {
        cubo1=cubo[i];
        printf("%d", cubo1);
        printf(" ");
        i++;
    }

    
    


    return 0;
}