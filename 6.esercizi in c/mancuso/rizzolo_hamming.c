#include <stdio.h>

#define NBITS  4 // numero di bit per la codifica FLC
#define NCODES 4 // numero di codici dell'algabeto

// print_code: stampa un simbolo dell'algabeto
//
// Input: simbolo dell'algabeto da stampare
// Output: 
//void print_code(......) {
  //inserisci qui il tuo codice
//}

// hamming: calcola la distanza di hamming tra due simboli di uno stesso alfabeto
//
// Input: due simboli da confrontare
// Output: distanza di hamming
int hamming(int code[NCODES][NBITS]) {
  //inserisci qui il tuo codice
  int count=0;
  for(int i=0 ; i<NCODES ; i++){
      count=0;
      for(int j=0 ; j<NBITS-1 ; j++){
        if((code[i][j]+code[i++][j])%2!=0){
            count++;
        }
        printf("%d", count);
      }
      printf("\n");
  }
  return 0;
}

// main: dato un alfabeto, stampa tutte le possibili distanze di hamming tra u sumboli
//       il programma deve stampare la seguente stringa
//       La distanza tra <simbolo 1> e <simbolo 2> = <distanza di hamming>
//
// Input: 
// Output: 
int main() {
    int codec[NCODES][NBITS] = 
    {
        {1, 0, 1, 1},
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {0, 1, 0, 1},
    };
    //inserisci qui il tuo codice
    hamming(codec);
    return 0;
}