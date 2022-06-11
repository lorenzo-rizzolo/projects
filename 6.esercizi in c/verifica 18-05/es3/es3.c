#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("input.txt", "r");
    if (f==NULL){
        printf("file non esistente");
        return 0;
    }
    char caratteri[200];
    int i=0;
    while(!feof(f)){
        fscanf(f, "%c", &caratteri[i]);
        i++;
    }
    fclose(f);
    char s, sos; 
    printf("Inserisci la lettere da sostiuire:  ");
    scanf("%c", &s);
    fflush(stdin);
    printf("Inserisci il sostitutivo:  ");
    scanf("%c", &sos);
    f=fopen("input.txt","w");
    for(int j=0 ; j<i-1 ; j++){
        if(caratteri[j]==s){
            caratteri[j]=sos;
        }
        fprintf(f,"%c",caratteri[j]);
        printf("%c", caratteri[j]);
    }


    return 0;
}