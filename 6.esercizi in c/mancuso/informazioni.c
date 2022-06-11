#include <stdio.h>
#include <string.h>

struct frase{
    char car;
    int qua;
}v[20];

int main(){

    struct frase v[20];
    char f[20]; 
    int l, count=0;

    printf("inserire frase: "); scanf("%s", f);
    l=strlen(f);
    
    for(int j=0 ; j<l ; j++){
        v[count].qua=0;
        for(int i=0 ; i<l ; i++){
            if(f[j]==f[i] && f[j]!='.' && f[i]!='.'){
                v[count].car=f[j];
                f[i]='.';
                v[count].qua++;
            }
        }
        count++;
    }
    for(int i=0 ; i<count ; i++){
        printf("%c  |  ", v[i].car); printf("%d su %d\n", v[i].qua, l);
    }
    return 0;
}