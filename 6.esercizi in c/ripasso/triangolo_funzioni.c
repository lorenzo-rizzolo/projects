#include <stdio.h>
#include <math.h>

int ipo(int h,int b){
    int ipoten= sqrt(h*h+b*b);
    return ipoten;
}
int area(int h,int b){
    int ar= (b*h)/2;
    return ar;
}
int per(int h,int b){
    int ipote=ipo(h,b);
    int per= ipote+h+b;
    return per;
}

main(){
    int h, b;

    printf("inserire altezza: ");
    scanf("%d", &h);
    printf("inserire base: ");
    scanf("%d", &b);
    int ipotenusa=ipo(h,b);
    int ar=area(h,b);
    int perimetro=per(h,b);
    
    printf("area= %d\n", ar);
    printf("perimetro= %d\n", perimetro);
    printf("ipotenusa= %d", ipotenusa);
}