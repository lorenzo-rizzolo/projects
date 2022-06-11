#include <stdio.h>
#include <string.h>
#define num_corsi 3

struct corsi{
    char corso[20];
    char nome[20];
    int voto;
}p[num_corsi];

int leggi(){
    struct corsi p[num_corsi];
    int min=0, max=0, cas_min, cas_max, cas_med;
    for(int i=0 ; i<num_corsi ; i++){
        printf("Inserire nome corso: ");:
        scanf("%s", p[i].corso);
        printf("Inserire nome persone: ");
        scanf("%s", p[i].nome);
        printf("Inserisci voto medio: ");
        scanf("%d", &p[i].voto);
        if(num_corsi==1){
            min = p[0].voto;
            max= p[0].voto;
        }else{
            if(p[i].voto<min)
                min=p[i].voto;
                cas_min=i;
            else if(p[i].voto>max){
                max=p[i].voto;
                cas_max=i;
            }
            else{
                cas_med=i;
            }
        }
        printf("--------------------\n");
    }
    printf("Corso: %s\n", p[cas_max].corso);
    printf("Docente: %s\n", p[cas_max].nome);
    printf("Voto: %s\n", p[cas_max].voto);
    printf("--------------------\n");
    printf("Corso: %s\n", p[cas_min].corso);
    printf("Docente: %s\n", p[cas_min].nome);
    printf("Voto: %s\n", p[cas_min].voto);
    printf("--------------------\n");
    printf("Corso: %s\n", p[cas_med].corso);
    printf("Docente: %s\n", p[cas_med].nome);
    printf("Voto: %s\n", p[cas_med].voto);
}

void main(){
    leggi();

}