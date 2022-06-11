#include <stdio.h>

float potenza(int a, int b){
    float molt;
    molt=a;
    for(int i=1; i<b; i++){
        molt= molt*a;
    }
    return molt;
}

main(){
    float a,b,pot;
    printf("inserire il numero: ");
    scanf("%f", &a);
    printf("inserire la potenza: ");
    scanf("%f", &b);
    pot=potenza(a,b);
    printf("risultato: %f", pot);
}