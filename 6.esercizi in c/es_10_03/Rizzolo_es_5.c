#include <stdio.h>
#include <string.h>

main(){
    char f[30];
    int count=1;
    printf("inserire frase--> "); scanf("%s", f);
    int l=strlen(f);
    for(int i=1 ; i<l ; i++){
        if(f[0]==f[i]){count++;}
    }
    printf("la lettera %c appare %d", f[0], count);
}