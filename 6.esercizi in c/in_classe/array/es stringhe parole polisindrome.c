#include <stdio.h>
#include <string.h>

int main()
{
    char vet[20];
    int n_lung, i, n, x, y, l;
    printf("inserire parola:  ");
    scanf("%s", vet);
    n_lung=strlen(vet);
    printf("\nla parola e' lunga %d caratteri.", n_lung);
    l=n_lung/2;
    n=n_lung-1;

    i=0;
    
    while (n>=l)
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
            printf("\nparola non e' polindroma.");
            n=0;
        }
        if (n==l-1)
        {
            printf("\nla parola e' polisindroma.");
        }

    }

    

   


   

  return 0;
}
