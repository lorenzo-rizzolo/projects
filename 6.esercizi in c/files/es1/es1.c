#include <stdio.h>
#define num_controllo 10

int main () {
   FILE *fp,*fil;
   int c,i=0,numeri[20],dim=0;
  
   fp = fopen("numeri.txt","r");
   
   printf("%d", dim);
   while(!feof(fp)) {
      int v;
      fscanf(fp,"%d", &v);
      if( feof(fp) ) { 
         break ;
      }
      numeri[i]=c;
      numeri[i]=numeri[i];
      printf("%c", numeri[i]);
      i++;
      dim++;
   }
   fclose(fp);
   printf("%d", dim);
   fil = fopen("numeri_min_10.txt","w");
    fprintf(fil,"");
    fclose(fil);
    fil = fopen("numeri_mag_10.txt","w");
    fprintf(fil,"");
    fclose(fil);
   for(int i=0 ; i<dim ; i++){
       printf("\n%d", numeri[i]);
       if(numeri[i]<=num_controllo && numeri[i]!=-16){
           fil = fopen("numeri_min_10.txt","a");
           fprintf(fil,"%d ", numeri[i]);
           fclose(fil);
       }else if(numeri[i]>=num_controllo && numeri[i]!=-16){
           fil = fopen("numeri_mag_10.txt","a");
           fprintf(fil,"%d ", numeri[i]);
           fclose(fil);
       }
   }

   return(0);
}