#include <stdio.h>

int main(){
    
    char v[]={'a','j','k','h','g','e','f','v','n','q'};

    int scambio, i, k, a;
    int n=10;
    a = n;
    int c[10];
    for(i=0 ; i<n ; i++){
        c[i] = (int)v[i];
    }
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
        printf("%c  ",v[i]);
    }

}