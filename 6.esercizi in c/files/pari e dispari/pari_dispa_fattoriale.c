#include <stdio.h>
#define TOT 5

int fatto(int nume){

    int tot=1;
    int i=1;
    while(i < nume){
        tot=tot*i;
        i += 1;
    }

    return tot;
}

int main(){
    int n, numero;
    FILE *num, *pari, *dis, *fat;

    pari = fopen("./pari.txt","w");
    dis = fopen("./dis.txt","w");
    fat = fopen("./fattoriale.txt", "w");
    fprintf(pari,"");
    fprintf(dis,"");
    fprintf(fat,"");
    fclose(pari);
    fclose(dis);
    fclose(fat);

    num = fopen("./numeri.txt","r");
    pari = fopen("./pari.txt","a");
    dis = fopen("./dis.txt","a");
    fat = fopen("./fattoriale.txt", "a");

    if(num == NULL){
        printf("file non esistente");
        return 0;
    }

    while(!feof(num)){
        fscanf(num,"%d\n",&numero);
        if(numero%2==0){
            fprintf(pari, "%d - ", numero);
        }else{
            fprintf(dis, "%d;  ", numero);
        }
        n = fatto(numero);
        fprintf(fat,"%d\n", n);
    }
    fclose(num);
    fclose(pari);
    fclose(dis);
    fclose(fat);
    
    

    return 0;
}