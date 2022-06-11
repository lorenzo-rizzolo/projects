#include <stdio.h>
#include <string.h>
#define righe 5
#define lunghezza 10


void v(char a[][lunghezza + 1], int dim){

    for(int i = 0; i < dim; i++) {
        int i_min = i;

        for(int j = i+1; j < dim; j++) {
            if (strcmp(a[j], a[i_min]) < 0) 
            i_min = j;
        }
        if (i != i_min) {
            char temp[lunghezza + 1]; // Scambia gli elementi usando
            strcpy(temp, a[i]); // una stringa temporanea
            strcpy(a[i], a[i_min]);
            strcpy(a[i_min], temp);
        }
    }
}


int main(){
 char stringhe[righe][lunghezza + 1] =
 {"ciao", 
 "miao", 
 "bau", 
 "muuuu", 
 "grrrrrr"};

    v(stringhe, righe);

    for(int i=0; i < righe; i++)
    printf("%s\n", stringhe[i]);

return 0;
}