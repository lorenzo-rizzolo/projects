#include <stdio.h>
#include "util.h"

void logaritmo(int b, int n){
    int i=0;
    int num=n;
    while(n>=b){
        n=n/b;
        i++;
    }
    int resto=num-pow(b,i);
    printf("\nrisultato= %d\n", i);
    if(resto>=1){
        printf("Aspetta, c'e' ancora del resto perche' il numero %d\ne' piu' grande di %d alla %d, il resto e': %d",num, b, i,resto);
    }
} 

main(){
    int base, num;
    printf("inserire il numero: "); scanf("%d", &num);
    printf("inserire la base del logaritmo: "); scanf("%d", &base);
    logaritmo(base, num); 
}
