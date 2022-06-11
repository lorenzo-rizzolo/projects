#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>

#define l 11

typedef struct
{
    char nome[l];
    char cognome[l];
    char numero[l];
}utente;

int main()
{
    utente s;
    FILE*fp,*f2;
    int c;
    char n[l];
    char m[l];
    char v[l];
    if((fp=fopen("rubrica.txt","r"))==NULL)
    {
        printf("Errore nell'apertura del file!");
        return 0;
    }
    if((f2=fopen("rubrica2.txt","w"))==NULL)
    {
        printf("Errore nell'apertura del file!");
        return 0;
    }

    printf("0 per visualizzare, 1 per modificare un numero di telefono, 2 per rimuovere un numero o 3 per aggiungere un utente: ");
    scanf("%d",&c);
    switch (c)
    {
        case 0:
            while(!feof(fp))
            {
                fscanf(fp,"%s\t%s\t%s",s.nome,s.cognome,s.numero);
                fprintf(f2,"%s\t%s\t%s\n",s.nome,s.cognome,s.numero);
            }
        break;
        case 1:
        printf("inserire il nome dell'utente: ");
        scanf("%s",n);
        printf("inserire il cognome dell'utente: ");
        scanf("%s",m);
        printf("inserire il numero dell'utente: ");
        scanf("%s",v);
        while(!feof(fp))
        {
            fscanf(fp,"%s\t%s\t%s",s.nome,s.cognome,s.numero);
            int result_n = strcmp(s.nome, n);
            int result_c = strcmp(s.cognome, m);


            if((result_n==0) &&(result_c==0) )
              fprintf(f2,"%s\t%s\t%s\n",s.nome,s.cognome,v);
            else
              fprintf(f2,"%s\t%s\t%s\n",s.nome,s.cognome,s.numero);
        }
        break;

        case 2://rimuovi
        printf("inserire il nome dell'utente: ");
        scanf("%s",n);
        printf("inserire il cognome dell'utente: ");
        scanf("%s",m);

        while(!feof(fp))
        {
            fscanf(fp,"%s\t%s\t%s",s.nome,s.cognome,s.numero);
            int result_n = strcmp(s.nome, n);
            int result_c = strcmp(s.cognome, m);


            if((result_n==0) &&(result_c==0) )
                {}
            else
                {
                    fprintf(f2,"%s\t%s\t%s\n",s.nome,s.cognome,s.numero);
                }
        }
        break;




        case 3://inserisci
        printf("inserire il nome dell'utente: ");
        scanf("%s",n);
        printf("inserire il cognome dell'utente: ");
        scanf("%s",m);
        printf("inserire il numero dell'utente: ");
        scanf("%s",v);

        while(!feof(fp))
            {
                fscanf(fp,"%s\t%s\t%s",s.nome,s.cognome,s.numero);
                fprintf(f2,"%s\t%s\t%s\n",s.nome,s.cognome,s.numero);
            }


        fprintf(f2,"%s\t%s\t%s\n",n,m,v);
        break;

        default:
            printf("Nessuna opzione possibile è stata selezionata!");
        break;
    }

    fclose(f2);
    fclose(fp);
    return 0;
}