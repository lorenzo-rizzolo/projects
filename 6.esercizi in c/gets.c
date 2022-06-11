#include <stdio.h>

struct compleanni{
    int mese[2];
    int giorno[2];
    int anno[4];
}a1,a2,a3;

main(){
    
    printf("inserire giorno: "); gets(a1.giorno);
    printf("inserire mese: "); gets(a1.mese);
    printf("inserire anno: "); gets(a1.anno);

    printf("inserire giorno: "); gets(a2.giorno);
    printf("inserire mese: "); gets(a2.mese);
    printf("inserire anno: "); gets(a2.anno);

    printf("inserire giorno: "); gets(a3.giorno);
    printf("inserire mese: "); gets(a3.mese); 
    printf("inserire anno: "); gets(a3.anno);

    if((a1.anno<a2.anno) && (a1.anno<a3.anno)){
        printf("%d", a1.anno);
        printf("%d", a2.anno);
        printf("%d", a3.anno);
        printf("primo ragazzo piu' grande.");
    }
    else{
        if((a2.anno<a1.anno) && (a2.anno<a3.anno)){
            printf("secondo ragazzo piu' grande.");
        }
        if((a3.anno<a1.anno) && (a3.anno<a2.anno)){
            printf("terzo ragazzo più grande");
        }
        else if(a1.anno==a2.anno){
            if(a1.mese<a2.mese){
                printf("primo ragazzo piu' grande.");
            }
            if(a1.mese>a2.mese){
                printf("secondo ragazzo piu' grande.");
            }
            
            else if(a1.mese==a2.mese){
                if(a1.giorno<a2.giorno){
                    printf("primo ragazzo piu' grande.");
                }
                if(a1.giorno>a2.giorno){
                    printf("secondo ragazzo piu' grande.");
                }
            }
        }

        else if(a1.anno==a3.anno){
            if(a1.mese<a3.mese){
                printf("primo ragazzo piu' grande.");
            }
            if(a1.mese>a3.mese){
                printf("terzo ragazzo piu' grande.");
            }
            
            else if(a1.mese==a3.mese){
                if(a1.giorno<a3.giorno){
                    printf("primo ragazzo piu' grande.");
                }
                if(a1.giorno>a3.giorno){
                    printf("terzo ragazzo piu' grande.");
                }
            }
        }

        else if(a3.anno==a2.anno){
            if(a3.mese<a2.mese){
                printf("terzo ragazzo piu' grande.");
            }
            if(a3.mese>a2.mese){
                printf("secondo ragazzo piu' grande.");
            }
            
            else if(a3.mese==a2.mese){
                if(a3.giorno<a2.giorno){
                    printf("terzo ragazzo piu' grande.");
                }
                if(a3.giorno>a2.giorno){
                    printf("secondo ragazzo piu' grande.");
                }
            }
        }
        
    }
    


}