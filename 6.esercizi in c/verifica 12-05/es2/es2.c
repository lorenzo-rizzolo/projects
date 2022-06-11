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
    int max=v[n];
    int min=v[0];
    FILE *fp;
    fp = fopen("maxmin.txt","w");
    fprintf(fp, "max=%d\n", max);
    fprintf(fp, "min=%d\n", min);
    return;
}

int main(){
    FILE *f;
    f = fopen("numeri.txt","r");

    int num[10], i=0;
    while(!feof(f)){
        fscanf(f,"%d", &num[i]);
        i++;
    }
    ordinamento(num, i);

    return 0;
}