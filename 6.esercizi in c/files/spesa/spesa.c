#include <stdio.h>
#define articoli 3

main(){
    FILE *fp;
    char art[10];

    fp = fopen("spesa.txt","w");
    fprintf(fp,"");
    fclose(fp);

    for (int i = 0; i < articoli; i++)
    {
        printf("Inserisci articolo %d: ", i); scanf("%s", art);
        fp = fopen("spesa.txt","a");
        fprintf(fp,"%s\n", art);
        fclose(fp);
    }

    int c;
  
    fp = fopen("spesa.txt","r");
    while(1) {
       c = fgetc(fp);
        if( feof(fp) ) { 
         break ;
    }
      printf("%c", c);
   }
   fclose(fp);
    
}