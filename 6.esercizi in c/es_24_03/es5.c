#include <stdio.h>
#include <string.h>
#define partite 2

struct Partita{
char moneta;
int ris_dado1;
int ris_dado2;
}p[partite]; 

int main(){
    struct Partita p[partite];
    int g1=0, g2=0;

    for(int i=0 ; i<partite ; i++){
        printf("Risultato moneta testa[t] croce[c]-> "); 
        scanf("%c", &p.moneta[i]);
        printf("Risultato dado 1 - da 1 a 6-> "); 
        scanf("%d", &p.ris_dado1[i]);
        printf("Risultato dado 2 - da 1 a 6-> "); 
        scanf("%d", &p.ris_dado2[i]);
        if(p.moneta[i]=='t'){
            if(p.ris_dado1[i]>p.ris_dado2[i]){
                g1++;
            }else{
                g2++;
            }
        }else{
            if(p.ris_dado1[i]>p.ris_dado2[i]){
                g2++;
            }else{
                g1++;
            }
        }
    }
    if(g1>g2){
        return 1;
    }else if(g2>g1){
        return 2;
    }else{
        return 0;
    }
    return 0;
}
