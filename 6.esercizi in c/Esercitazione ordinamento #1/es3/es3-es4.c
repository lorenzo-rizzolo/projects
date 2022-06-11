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

    FILE *f;
    f=fopen("ordinati.txt","w");
    for (i=0 ; i<a ; i++){
        fprintf(f, "%d\n", v[i]);
    }
    
    return;
}

int main(){
    FILE *f;
    f = fopen("numeri.txt","r");
    if(f==NULL){
        return 0;
    }

    int numeri[200], i=0, count=0;
    while(!feof(f)){
        fscanf(f,"%d\n",&numeri[i]);
        i++;
        count++;
    }
    printf("\n");
    ordinamento(numeri,count);
    return 0;
}