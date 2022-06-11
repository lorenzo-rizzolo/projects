#include <stdio.h>
#include <math.h>

float distanza(int x1, int y1, int x2, int y2){
    float dist;
    dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    return dist;
}

main(){
    int x1,y1,x2,y2;
    float dist;
    printf("inserire il punto sull'asse X: ");
    scanf("%d", &x1); y1=0;
    printf("inserire il punto sull'asse Y: ");
    scanf("%d", &y2); x2=0;
    dist=distanza(x1,y1,x2,y2);
    printf("%f", dist);
    printf("\ninserire le coordinate del punto A: \n");
    printf("X: "); scanf("%d", &x1);
    printf("Y: "); scanf("%d", &y1);
    x2=5;y2=3;
    dist=distanza(x1,y1,x2,y2);
    printf("distanza tra il punto A(%d;%d) e B(5;3): ", x1,y1);
    printf("%f", dist);
}