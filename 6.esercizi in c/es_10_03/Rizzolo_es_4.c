#include <stdio.h>
#include <string.h>

main(){

    char v[30];
    int vocali=0, cons=0;

    printf("inserire frase--> "); scanf("%s", v);
    int l=strlen(v);
    for(int i=0 ; i<l ; i++){
        if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u'){
            vocali++;
        }else{
            cons++;
        }
    }
    for(int i=0 ; i<l ; i++){
        if(v[i]=='a'){ v[i]='A'; }
        if(v[i]=='e'){ v[i]='E'; }
        if(v[i]=='i'){ v[i]='I'; }
        if(v[i]=='o'){ v[i]='O'; }
        if(v[i]=='u'){ v[i]='U'; }
    }
    printf("--------------------------------\n");
    printf("vocali--> %d\n", vocali);
    printf("consonanti--> %d\n", cons);
    printf("frase--> %s\n", v);

}