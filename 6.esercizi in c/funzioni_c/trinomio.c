#include <stdio.h>
#include <math.h>

int soluzione(int a, int b, int c){

    int delta, x1, x2;
    delta=b*b-(4*a*c);
    printf("\n %d \n", delta);
   

    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);

    printf("X1= %d\n", x1);
    printf("X2= %d", x2);
    return 0;
}

main(){

    int a,b,c;
    
    printf("inserire i tre parametri a,b,c dove ax2+bx+c=0 ");

    
    printf("\ninserire a: "); scanf("%d", &a);
    printf("\ninserire b: "); scanf("%d", &b);
    printf("\ninserire c: "); scanf("%d", &c);
    soluzione(a,b,c);
}