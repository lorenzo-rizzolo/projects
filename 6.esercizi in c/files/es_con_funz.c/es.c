#include <stdio.h>
#include <string.h>

void stampa(char f[20]){

    char c;
    FILE *fp;
    printf("Contenuto del file %s:\n", f);
    fp = fopen(f,"r");
    while(!feof(fp)) {
      c = fgetc(fp);
      printf("%c", c);
    }
    fclose(fp);
   
}

int main(){
    char file[20];

    printf("Inserisci nome del file: ");
    scanf("%s",file);
    stampa(file);
}