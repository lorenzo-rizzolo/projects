#include <stdio.h>

float calcolamedia(float x, float y){
    
    float media;
    media = ( x + y)/2;
    return(media);
}

int main(){

    float a, b, risultato;
    
    printf("inserisci i due valori:");
    printf("\nvalore 1: ");
    scanf("%f", &a);
    printf("valore 2: ");
    scanf("%f", &b);

    risultato = calcolamedia(a,b);
    printf("valore medio= %f", risultato);

    return (0);
}