#include <stdio.h>

void ordinamento(float v[], int n){
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
        printf("%.2f  ",v[i]);
    }
    return;
}

int main(){
    
    float v[]={145,2,35.2,23,23.1,78.3,98.4,12,3,21.5};
    ordinamento(v,10); //primo termine vettore secondo la sua dimensione
    return 0;
}