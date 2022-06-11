#include <stdio.h>

int scansione(int mat1[100][100], int n, int m){

    int count=0, num;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(mat1[i][j] == mat1[i][j+1] && j!=m && j<m){
                count++;
                num= mat1[i][j];
                if(count==1){
                    printf("righa--> %d\n", i);

                    printf("numero--> %d\n", num);}
            }
        }
    }
    return count;
}

void main(){

    int n, m;
    printf("Inserire grandezza matrice-->\n");
    printf("Inserire righe--> "); scanf("%d", &n);
    printf("Inserire colonne--> "); scanf("%d", &m);

    int mat[n][m];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("inserisci numero di %d-%d--> ", i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    int fine;
    fine= scansione(mat, n, m);
    printf("quantita'--> %d", fine);
}