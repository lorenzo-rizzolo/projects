#include <stdio.h>
#include <string.h>

int main()
{
    char vet1[34]="io sono tuo padre";
    char vet2[17]=" ciao ";

    strcat(vet1, vet2);
    printf("%s", vet1);

  return 0;
}