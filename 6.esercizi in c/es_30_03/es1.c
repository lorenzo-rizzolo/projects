#include <stdio.h>
#include <string.h>
#define num_persone 4

struct persone{
    char nome[20];
    char cognome[20];
    int voto;
}p[num_persone];

void spazio(){
    printf("---------------\n");
}

void media(int som){
    int media = som/num_persone;
    printf("Media: %d", media);
}

int main(){
    struct persone p[num_persone];
    int somma = 0;

    for(int i=0 ; i<num_persone ; i++){
        printf("Inserisci nome: ");
        scanf("%s", p[i].nome);
        printf("Inserisci cognome: ");
        scanf("%s", p[i].cognome);
        printf("Inserisci voto: ");
        scanf("%d", &p[i].voto);
        spazio();
    } 
    for(int i=0 ; i<num_persone ; i++){
        printf("%s\t", p[i].nome);
        printf("%s\t", p[i].cognome);
        printf("%d\n", p[i].voto);
        somma = somma + p[i].voto;
        spazio();
    } 
    media(somma);




return 0;
}