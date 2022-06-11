#include<stdio.h>
#include <math.h>



int somma=0;
int main(){
    
    int numero, finale;
    
    printf("Inserire il numero che vuoi convertire:");
    scanf("%d", &numero);
    
    if(numero<0 || numero>255){
    printf("numero non valido");
    return(0);
    }

    finale = dec2bin(numero);
    
    if(finale<=11){printf("000000%d", finale); return(0);}
    if(finale<=111){printf("00000%d", finale); return(0);}
    if(finale<=1111){printf("0000%d", finale); return(0);}
    if(finale<=11111){printf("000%d", finale); return(0);}
    if(finale<=111111){printf("00%d", finale); return(0);}
    if(finale<=1111111){printf("0%d", finale); return(0);}
    
 }

int dec2bin(int num){
    
    for(int i=0; i<8;i++){
        int r= num%2;
        num=num/2;
        int a= pow(10, i);
        a = a*r;
        somma= somma+a;
        
    }
    return(somma);
}
