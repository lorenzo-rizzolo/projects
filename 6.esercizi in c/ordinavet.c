#include <stdio.h>

void ordinamento(int v[], int n){
    int scambio, i, k, a;
    a = n;
    n = n-1;
    do{
        scambio=0;
        for(i=0 ; i<n ; i++){
            if (v[i]>v[i+1]){
                k=v[i+1];
                v[i+1]=v[i]; 
                v[i]=k;
                scambio = 1;
            }
        }
    }while(scambio==1);
    for (i=0 ; i<a ; i++){
        printf("%d  ",v[i]);
    }
    return;
}

int main(){
    
    int v[]={145,2,35,23,23,78,98,12,3,21};

    ordinamento(v,10); //primo termine vettore secondo la sua dimensione
}