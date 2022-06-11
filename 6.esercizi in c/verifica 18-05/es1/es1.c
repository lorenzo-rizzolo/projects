#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("input.txt", "r");
    if (f==NULL){
        printf("file non esistente");
        return 0;
    }
    char c, car;
    char caratteri[200];
    int i=0;
    printf("Inserisci la lettera: ");
    scanf("%c", &car);
    while(!feof(f)){
        fscanf(f,"%c", &c);
        caratteri[i]=c;
        i++;
    }
    int count=0;
    for(int j=0 ; j<i-1 ; j++){
        if(caratteri[j-1]==caratteri[j] && caratteri[j]==car){
            count++;
        }else{
            count=count;
        }
    }
    printf("\nla lettera %c si ripete per due volte %d volte/a", car, count);

    return 0;
}