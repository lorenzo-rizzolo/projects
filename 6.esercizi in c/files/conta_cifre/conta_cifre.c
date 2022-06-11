#include <stdio.h>

void main(){
    char frase[200], c;
    printf("Inserisci:\n");
    for(int i=0 ; c!='0' ; i++){
        scanf("%c",&c);
        frase[i]=c;
    }
    FILE *f;
    f = fopen("testo.txt","w");
    for(int i=0 ; i<strlen(frase)-1 ; i++){
        fprintf(f,"%c",frase[i]);
    }
}