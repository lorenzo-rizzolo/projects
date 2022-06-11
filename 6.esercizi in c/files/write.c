#include <stdio.h>
#define n 2

main(){
    FILE *fp;
    char nome[20],cogno[20];
    int voto;

    fp = fopen("file_prova.txt","w");
    for(int i=0 ; i<n ; i++){
        printf("Inserisci nome: ");
        scanf("%s", nome);
        printf("Inserisci cognome: ");
        scanf("%s", cogno);
        printf("Inserisci voto: ");
        scanf("%d", &voto);
        printf("-----------\n");
        fprintf(fp,"%s\t%s\t%d\n",nome,cogno,voto);
    }
    fclose(fp);
}