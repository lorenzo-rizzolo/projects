#include <stdio.h>

int minimo(int a, int b, int c){
    int v[3]={a,b,c}, min;
    min=v[0];
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            if(j!=i && v[j]<v[i] && v[j]<min){
                min=v[j];
            }
        }   
    }
    return min;
}

main(){
    int a,b,c,min;
    printf("inserire 3 numeri. \n");
    printf("primo: "); scanf("%d", &a);
    printf("secondo: "); scanf("%d", &b);
    printf("terzo: "); scanf("%d", &c);
    min=minimo(a,b,c);
    printf("minimo= %d", min);
}