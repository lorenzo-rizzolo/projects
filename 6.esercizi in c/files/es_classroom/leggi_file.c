#include <stdio.h>

int main(){
    FILE *f;
    char c;

    f = fopen("file_da_leggere.txt","r");
    while(feof(f)) {
      c = fgetc(f);
      printf("%c", c);
    }
    fclose(f);

}