#include <stdio.h>
#include <math.h>

main()
{
    float l,h,area,perimetro,p=3.14,po,circ;
    int i;

    printf("mettere un numero tra 1 2 e 3, 1 per il triangolo 2 per il quadrato e 3 per il cerchio:  ");
    scanf("%d", &i);

    switch (i)
    {
        case 1:
            printf("inserire lato triangolo: ");
            scanf("%f", &l);
            printf("inserire triangolo triangolo: ");
            scanf("%f", &h);

            area=(l*h)/2;
            perimetro=l*3;
            printf("area= %f", area);
            printf("perimetro= %f", perimetro);
            break;
        
        case 2:
            printf("inserire lato quadrato: ");
            scanf("%f", &l); 

            area=pow(l,2);
            perimetro=l*4;
            printf("area= %f", area);
            printf("perimetro= %f", perimetro);
            break; 
        
        case 3:
            printf("inserire raggio cerchio: ");
            scanf("%f", &l); 

            po=pow(l,2);
            area=p*po;
            perimetro=p*l*2;
            printf("area= %f", area);
            printf("circonferenza= %f", circ);
            break; 
        
        default:
            printf("non esiste !!!");
            break;
            

    }
    
}