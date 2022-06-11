#include <stdio.h>

float calcmassimo(float a, float b){
    
    float max;

    if(a>b){
        max=a;
        return(max);
    }
    else{
        max=b;
        return(max);
    }
}

main(){

    
    float a=10, b=20, max;
    max = calcmassimo(a, b);
    printf("il massimo e': %f", max);
}