#include <stdio.h>

void ordinamento(int v[], int n){
    int scambio, i, k, a;
    a = n;
    n = n-1;
    FILE *fp;
    fp = fopen("output.txt","w");

    do{
        scambio=0;
        for(i=1 ; i<n ; i++){
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
        fprintf(fp,"%d ", v[i]);
    }
    return;
}

int main(){
    int i=0, numeri[200];
    FILE *f;
    f = fopen("input.txt","r");


    while(!feof(f)){
        fscanf(f,"%d ", &numeri[i]);
        i++;
    }
    for(int j=0 ; j<i ; j++){
        printf("%d\n", numeri[j]);
    }
    ordinamento(numeri,i);

    return 0;
}