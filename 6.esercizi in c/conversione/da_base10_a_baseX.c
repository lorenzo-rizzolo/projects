#include<stdio.h>

int main(){
    int numero,base,resto,i=0;
    int finale[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    printf("Inserire il numero che vuoi convertire:");
    scanf("%i", & numero);
    printf("Inserire la base in cui vuoi convertire il numero:");
    scanf("%i", & base);

    while(numero != 0){
        printf("%d / %d: ", numero, base);
        resto = numero % base;
        numero = numero / base;
        printf("%d - %d\n", numero, resto);
        finale[i++] = resto;
    }

    for(i=0; i<10; i++){
        printf("%d", finale[9 - i]);
    }
}
