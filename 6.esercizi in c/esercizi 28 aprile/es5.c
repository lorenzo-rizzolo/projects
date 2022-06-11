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
        printf("%d ",v[i]);
    }
    printf("\nmin: %d\nmax=%d\n", v[0], v[a-1]);
    return 0;
}

int main(){
    
    FILE *f;
    f = fopen("temperature.txt","r");
    int numeri[200], count=0, i=0;
    while(!feof(f)){
        fscanf(f,"%d\n",&numeri[i]);
        i++;
        count++;
    }
    printf("temperature\n----------------\n");
    for(int i=0 ; i<count ; i++){
        printf("%d ",numeri[i]);
    }printf("\n");

    ordinamento(numeri,count);
}