#include <stdio.h>

#define n 2

struct albergo{

    char nome[n];
    int stanze;
    int valst;
}al[10];

main(){

    struct albergo al[n];

    for(int i=0 ; i<n ; i++){
        printf("inserire nome hotel--> "); scanf("%s", al[i].nome);
        printf("inserire numero di stanze--> "); scanf("%d", &al[i].stanze);
        printf("inserire valutazione stanze--> "); scanf("%d", &al[i].valst);
        printf("--------------------------------\n");
    }
    printf("\nHOTELS\n--------------------------------\n");
    for(int i=0 ; i<n ; i++){
        printf("Nome hotel--> %s\n",al[i].nome);
        printf("Numero di stanze--> %d\n",al[i].stanze);
        printf("Valutazione stanze--> %d", al[i].valst);
        printf("\n--------------------------------\n");
    }
}