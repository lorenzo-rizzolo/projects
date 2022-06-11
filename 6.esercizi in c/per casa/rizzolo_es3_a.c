#include <stdio.h>

void main(void)

{
    int a;
    int b;
    float media; 


    printf("inserire nuovo valore:\n");
    scanf("%d", & a);
   
    printf("inserire nuovo valore:\n");
    scanf("%d", & b);  
    

    media=(float)(a+b)/2;
    printf("la media e: %f", media);

    sleep(1000000000000000000000);
}