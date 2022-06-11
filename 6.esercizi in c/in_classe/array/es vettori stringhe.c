#include <stdio.h>
#include <string.h>

int main()
{
    char vet[20];
    int n_lung, i, n, x, y;
    printf("inserire parola");
    scanf("%s", vet);
    n_lung=strlen(vet);
    n=n_lung-1;

    i=0;
    
    while (n>=2)
    {
        /*x=strcmp(vet[i], vet[n]);
        printf("%d", x);*/
        y=vet[i];
        x=vet[n];

        if(x==y)
        {
            n--;
            i++;
           
        }
        else
        {
            printf("parola non polindroma");
            n=0;
        }
    }

    

   


   

  return 0;
}
