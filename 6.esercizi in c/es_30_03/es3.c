#include <stdio.h>
#include <string.h>
#define num_per 2

struct persona{
    int matricola;
    char nome[20];
    char cognome[20];
    int voti[10];
}p[num_per];

void main(){
    struct persona p[num_per];

    for(int i=0 ; i<num_per ; i++){
        printf("Inserisci matricola: ");
        scanf("%d", &p[i].matricola);
        printf("Inserisci nome: ");
        scanf("%s", p[i].nome);
        printf("Inserisci cognome: ");
        scanf("%s", p[i].cognome);
        printf("Inserisci 10 voti: \n");
        for(int j=0 ; j<10 ; j++){
            printf("Inserisci %d voto: ", j+1);
            scanf("%d", &p[i].voti[j]);
        }
        printf("---------------\n");
    }
    for(int i=0 ; i<num_per ; i++){
        printf("%d, %s, %s\n", p[i].matricola, p[i].nome, p[i].cognome);
        for(int j=0 ; j<10 ; j++){
            printf("%d, ", p[i].voti[j]);
        }printf("\n");
        printf("---------------\n");
    }

}