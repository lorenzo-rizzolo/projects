#include <stdio.h>

int main(){
    char v[200];
    FILE *f;
    f=fopen("output.txt","w");

    printf("Inserisci frase:\n");
    scanf("%s", v);

    for(int i=0 ; i<strlen(v) ; i++){
        if(v[i]=='0'){
            if(v[i+1]=='0'){
                return 0;
            }else{
                fprintf(f,"\n");
            }
        }else{
            fprintf(f,"%c",v[i]);
        }
        
    }

    return 0;
}