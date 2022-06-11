#include <stdio.h>

int main()
{
    int n;
    int a[n], i;
    
    
    printf("da quanti numeri e' composto il vettore?\n");
    scanf("%d", &n);
    printf("inserire i 5 valori del vettore: \n");

    for(i=0; i<n; i++)
    {
        printf("inserire valore: ");
        scanf("%d", &a[i]);
    }
    
    for(i=i-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}