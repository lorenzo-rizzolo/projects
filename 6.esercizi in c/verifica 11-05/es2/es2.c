#include <stdio.h>
<<<<<<< HEAD
=======
<<<<<<< HEAD

int main(){
    FILE *f2;
    f2 = fopen("dettagli.txt", "r");
    if(f2==NULL){
        printf("file non trovato");
        return 0;
    }

    char a[20];
    char A;
    int i=0; 
    while(!feof(f2)){
        fscanf(f2, "%s", a);
        if(i==1){
            A[]=a;
            printf("%s", A);
        }
        
        i++;
    }
    

    

    //fprintf(f,"il treno delle %d e %d porta un ritardo di %d minuti. Chissà se mi rimborseranno i %d,%d euro del biglietto? \nIl giorno %d/%d/2007 ci sarà una riunione alle %d.", h,m,r,e,c,g,m,a);
=======
>>>>>>> 73cf01fd882122a97f205c92f5633c41c5f36394
#define l 7

int main(){
    FILE *f;
    f = fopen("dettagli.txt","r");

    int v[l], i=0, a;
    while(!feof(f)){
        fscanf(f,"%d\n", &a);
        printf("%d", a);
        i++;
    }
<<<<<<< HEAD
=======
>>>>>>> 69d3513341ce6741a0f8516e87682258fef4baf6
>>>>>>> 73cf01fd882122a97f205c92f5633c41c5f36394

    return 0;
}