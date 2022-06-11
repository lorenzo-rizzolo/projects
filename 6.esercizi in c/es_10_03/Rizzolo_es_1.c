#include <stdio.h>

int main(){

    int c,r;
    

    printf("Inserire grandezza matrice-->\n");
    printf("Inserire righe e colonne--> "); scanf("%d", &r);
    c=r;   

    if(r>10 || c>10){
        printf("troppo grande !!"); 
        return 0;
    }

    int m[r][c];

    for (int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(i==0 || i==r-1 || j==0 || j==c-1){
                m[i][j]=0;
            }else{
                m[i][j]=1;
            }
        }
    }
    for (int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}