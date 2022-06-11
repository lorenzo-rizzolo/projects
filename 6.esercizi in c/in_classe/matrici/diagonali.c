#include <stdio.h>
#include <string.h>

main()
{
    int r,c, b, num;
    int v[100][100];

    printf("inserire dimensione matrice:");
    scanf("%d", &b);
    printf("l matrice e' %dx%d\n", b, b);
    printf("inserire numero da mettere sulla diagonale: ");
    scanf("%d", &num);

    for(r=0;r<b;r++)
    {
        for(c=0;c<b;c++)
        {
            if(r==c)
            {
                printf("%d ", num);

            }
            else
            {
                printf("0 ");
            }

        }
        printf("\n");
    }
    

}