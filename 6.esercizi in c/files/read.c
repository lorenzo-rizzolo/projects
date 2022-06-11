#include <stdio.h>

int main () {
   FILE *fp;
   char c;
  
   fp = fopen("file_prova.txt","r");
   while(!feof(fp)) {
      c = fgetc(fp);
      printf("%c", c);
   }
   fclose(fp);
   
   return(0);
}