#include <ctype.h>
#include <stdio.h>

int main(){

    char frase[10];
    int i;

    printf("inserire frase:  ");
    scanf("%s", frase);

    for(i=0;i<10;i++){
        
      
     char pippo = frase[i];
            frase[i]=toupper(pippo);
            printf("%c", frase[i]);
       
    }

}