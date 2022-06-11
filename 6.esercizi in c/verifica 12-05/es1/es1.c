#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("voti.txt","r");
    int open=1;
    if(open==1){
        FILE *file;
        file = fopen("medie.txt","w");
        fprintf(file,"");
        FILE *file2;
        file2 = fopen("debiti.txt","w");
        fprintf(file2,"");
    }
    char c[20], nome[20], cogno[20];
    int count=1, f=100, somma=0, voti;
    float media;
    
    while(!feof(fp)){

        fscanf(fp,"%s\n", c);
        int a = (int)c[0];
        a = a-48;
        //printf("count=%d\n", count);

        if(count == 1){
            for(int i=0 ; i<strlen(c) ; i++){
                nome[i]=c[i];
                //printf("%c", nome[i]);
            }
        }
        if(count == 2){
            for(int i=0 ; i<strlen(c) ; i++){
                cogno[i]=c[i];
                //printf("%c", cogno[i]);
            }
        }

        if(count==3){
            f=count+a;
            voti=a;
        }
        if(count > 3){
            somma=somma+a;
            //printf("%d; ", a);
        }
        if(count == f){
            media = (float)somma/voti;
            //printf("somm=%d\n", somma);
            FILE *f;
            FILE *fil;
            fil = fopen("debiti.txt","a");
            f = fopen("medie.txt","a");
            for(int i=0 ; i<strlen(nome) ; i++){
                fprintf(f,"%c", nome[i]);
                fprintf(fil,"%c", nome[i]);
            }fprintf(f," ");
            fprintf(fil," ");
            for(int i=0 ; i<strlen(cogno) ; i++){
                fprintf(f,"%c", cogno[i]);
                fprintf(fil,"%c", cogno[i]);
            }fprintf(f," ");
            fprintf(fil," ");
            if(media>=6){
                fprintf(fil,"promosso\n");
            }else{
                fprintf(fil,"debito\n");
            }
            fprintf(f, "%.1f\n", media);
            somma=0;
            count=1;
        }else{
            count++;
        }
    }
    //printf("%d", count);

    return 0;
}