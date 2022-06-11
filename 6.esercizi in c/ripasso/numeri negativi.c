#include <stdio.h>

void minore(int v[], int som){
    int cont;
    for(int i=0 ; i<10 ; i++){
        if(v[i]<0){
            som=som+v[i];
            cont++;
        }
    }
    float media= som/(float)cont;

    printf("somma= %d\n", som);
    printf("media= %f", media);
}
void maggiore(int v[], int som){
    int cont;
    for(int i=0 ; i<10 ; i++){
        if(v[i]>0){
            som=som+v[i];
            cont++;
        }
    }
    float media= som/(float)cont;

    printf("somma= %d\n", som);
    printf("media= %f", media);
}

main(){
    int t[10]= { 10,-13,17,-67,34,69,-32, -12, 24, -45 };
    int somma=0;

    if(t[9]<0){
        minore(t, somma);
    }else{
        maggiore(t, somma);
    }
}