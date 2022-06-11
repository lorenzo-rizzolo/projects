#include <stdio.h>
#include <string.h>

void main(){
    int anno, giorno,m;
    int gen=0, feb=0, mar=0, apr=0, mag=0, giu=0, lu=0, ag=0, sep=0, ot=0, nov=0, dic=0;

    printf("inserisci anno: "); scanf("%d", &anno);
    printf("inserisci giorno inizio: "); scanf("%d", &giorno);
    for(int i=giorno ; i<366 ; i=i+7){
        //gennaio
        if( i>=1 && i<=31 && gen==0){
            gen=1;
            printf("GENNAIO  ");
        }
        if( i>=1 && i<=31 ){
            m=1;
            printf("  |  %d/%d/%d", i, m,anno);
        }

        //febbraio
        if( i>=32 && i<=59 && feb==0){
            feb=1;
            printf("\nFEBBRAIO ");
        }
        if( i>=32 && i<=59 ){
            m=2;
            printf("  |  %d/%d/%d", i-31, m,anno);
        }

        //marzo
        if( i>=60 && i<=90 && mar==0){
            mar=1;
            printf("\nMARZO    ");
        }
        if( i>=60 && i<=90 ){
            m=3;
            printf("  |  %d/%d/%d", i-59, m,anno);
        }

        //aprile
        if( i>=91 && i<=120 && apr==0){
            apr=1;
            printf("\nAPRILE   ");
        }
        if( i>=91 && i<=120 ){
            m=4;
            printf("  |  %d/%d/%d", i-90, m,anno);
        }

        //maggio
        if( i>=121 && i<=151 && mag==0){
            mag=1;
            printf("\nMAGGIO   ");
        }
        if( i>=121 && i<=151 ){
            m=5;
            printf("  |  %d/%d/%d", i-120, m,anno);
        }

        //giugno
        if( i>=152 && i<=181 && giu==0){
            giu=1;
            printf("\nGIUGNO   ");
        }
        if( i>=152 && i<=181 ){
            m=6;
            printf("  |  %d/%d/%d", i-151, m,anno);
        }

        //luglio
        if( i>=182 && i<=212 && lu==0){
            lu=1;
            printf("\nLUGLIO   ");
        }
        if( i>=182 && i<=212 ){
            m=7;
            printf("  |  %d/%d/%d", i-181, m,anno);
        }

        //agosto
        if( i>=213 && i<=243 && ag==0){
            ag=1;
            printf("\nAGOSTO   ");
        }
        if( i>=213 && i<=243 ){
            m=8;
            printf("  |  %d/%d/%d", i-212, m,anno);
        }

        //settembre
        if( i>=244 && i<=273 && sep==0){
            sep=1;
            printf("\nSETTEMBRE");
        }
        if( i>=244 && i<=273 ){
            m=9;
            printf("  |  %d/%d/%d", i-243, m,anno);
        }

        //ottobre
        if( i>=274 && i<=304 && ot==0){
            ot=1;
            printf("\nOTTOBRE  ");
        }
        if( i>=274 && i<=304 ){
            m=10;
            printf("  |  %d/%d/%d", i-273, m,anno);
        }

        //novembre
        if( i>=305 && i<=333 && nov==0){
            nov=1;
            printf("\nNOVEMBRE ");
        }
        if( i>=305 && i<=333 ){
            m=11;
            printf("  |  %d/%d/%d", i-304, m,anno);
        }

        //dicembre
        if( i>=334 && i<=365 && dic==0){
            dic=1;
            printf("\nDICEMBRE ");
        }
        if( i>=334 && i<=365 ){
            m=12;
            printf("  |  %d/%d/%d", i-334, m,anno);
        }
    }

}