#include <stdio.h>

main(){
    int t[10] ={16,18,9,20,27,28,19,15,13,10 }, g[10];
    int i=0, MAX=0, MIN, somma=0, j=0 ;
    float media;
    MIN=t[0];
    for(j=0 ; j<10 ; j++){
        printf("t[j]=%d\n", t[j]);
        if(t[j]>15 && t[j]<25){
            g[j]= j;
        }else{
            g[j]=NULL;
        }
        
        for(i=0 ; i<10 ; i++){
            if(i!=j && t[j]<MIN && t[j]<t[i] ){
                MIN= t[j];
            }
            if(i!=j && t[j]>MAX && t[j]>t[i]){
                MAX= t[j];
            } 
        
        }
        somma=somma+t[j];
    }

    media=somma/(float)10;
    printf("%d\n", somma);
    printf("media= %f\n", media);
    printf("massimo= %d\n", MAX);
    printf("minimo= %d\n", MIN);
    for(i=0 ; i<10 ; i++){
        if(g[i]!=NULL){
            printf("la temperatura in questa casella e' compresa tra 15 e 25: %d\n", i);
        }
    }
}