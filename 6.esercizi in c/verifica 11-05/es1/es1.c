#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("output.txt","w");
    char c,v[200];

    printf("inserisci carattere ed inserisci 1 per terminare e 0 per andare a capo:\n");
    for(int i=0 ; c!='1' ; i++){
        scanf("%c",&c);
        v[i]=c;

    }
    
    int j=0;
    char v2[200];
    for(int i=0 ; i<strlen(v)-1 ; i++){
        if(i%2==0){
            v2[j]=v[i];
        }
        
    }
    for(int i=0 ; i<strlen(v2) ; i++){
        printf()
    }
    

    return 0;
}