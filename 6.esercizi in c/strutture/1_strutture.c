#include <stdio.h>

struct studente
{
    char nome[10];
    char cogno[20];
    char classe[10];
    char eta[2];
} x;


int main(){

    printf("inserire nome:  ");
    gets(x.nome);
    printf("inserire cognome:  ");
    gets(x.cogno);
    printf("inserire classe:  ");
    gets(x.classe);
    printf("inserire eta':  ");
    gets(x.eta);
    printf("%s %s \n%s \n%s ", x.nome, x.cogno, x.classe, x.eta);

    return (0); 
}