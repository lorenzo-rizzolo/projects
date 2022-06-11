#include <stdio.h>
#include <ctype.h>

void controllo(char arr[], int l){
    FILE *voc;
    FILE *cons;
    FILE *altro;
    voc = fopen("vocali.txt", "w");
    cons = fopen("consonanti.txt","w");
    altro = fopen("altro.txt","w");
    char c;
    for(int j=0 ; j<l-1 ; j++){
        c=arr[j];
        if(isalpha(arr[j])!=0){
            if(c=='a' || c=='A'){
                fprintf(voc,"%c", c);
            }
            else if(c=='e' || c=='E'){
                fprintf(voc,"%c", c);
            }
            else if(c=='i' || c=='I'){
                fprintf(voc,"%c", c);
            }
            else if(c=='o' || c=='O'){
                fprintf(voc,"%c", c);
            }
            else if(c=='u' || c=='U'){
                fprintf(voc,"%c", c);
            }else{
                fprintf(cons,"%c", c);
            }
        }else{
            fprintf(altro,"%c", c);
        }
    }

}


int main(){
    FILE *f;
    f = fopen("testo.txt", "r");
    if (f==NULL){
        printf("file non esistente");
        return 0;
    }

    char c;
    char caratteri[200];
    int i=0;
    while(!feof(f)){
        fscanf(f,"%c", &c);
        caratteri[i]=c;
        i++;
    }
    controllo(caratteri, i);
    return 0;
}