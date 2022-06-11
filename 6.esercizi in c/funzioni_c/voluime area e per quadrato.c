#include <stdio.h>

float perimetro(float l){
    
    float per;
    per=l*4;
    return(per);
}

float ar(float l){

    float ar;
    ar=l*l;
    return(ar);
}

float vol(float l){

    float vol;
    vol= l*l*l;
    return(vol);

}

main(){

    float l, per, area, volume;
    printf("inserire lato: ");
    scanf("%f", &l);
    per= perimetro(l);
    area= ar(l);
    volume= vol(l);
    printf("perimetro= %f", per);
    printf("area= %f", area);
    printf("volume= %f", volume);
    
}