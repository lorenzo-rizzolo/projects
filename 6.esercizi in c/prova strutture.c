#include <stdio.h>

struct alunno{
    char nome[10];
    char cognonome[10];
    int eta[2];
}a1,a2;

main(){

    printf("inserisci nome:  "); gets(a1.nome);
    printf("inserisci cognonome:  "); gets(a1.cognonome);
    printf("inserisci eta:  "); gets(a1.eta);

    printf("inserisci nome:  "); gets(a2.nome);
    printf("inserisci cognonome:  "); gets(a2.cognonome);
    printf("inserisci eta:  "); gets(a2.eta);

    printf(a1.nome); printf(" ");
    printf(a1.cognonome); printf(" ");
    printf(a1.eta); printf("\n");
    
    printf(a2.nome); printf(" ");
    printf(a2.cognonome); printf(" ");
    printf(a2.eta); printf(" ");
    
}