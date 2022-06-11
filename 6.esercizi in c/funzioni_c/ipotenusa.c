#include <stdio.h>
#include <math.h>

float ip;
float area;
float perimetro;

ipo(float c1, float c2){

    ip=hypot(c1,c2);
    area=(c1*c2)/2;
    perimetro= c1+c2+ip;
}

int main(){
    float cat1, cat2;
    
    printf("inserire valore cateti:  \n");
    printf("cateto1:  ");
    scanf("%f", &cat1);
    printf("cateto2:  ");
    scanf("%f", &cat2);
    ipo(cat1,cat2);
    printf("ipotenusa= %f", ip);
    printf("\narea= %f", area);
    printf("\nperimetro= %f", perimetro);
    return (0);
}
