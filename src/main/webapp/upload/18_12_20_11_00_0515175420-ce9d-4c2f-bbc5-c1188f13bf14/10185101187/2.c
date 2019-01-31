#include <stdio.h>

int main()
{
    int T, i, j, l, r;
    scanf("%d", &T);
    char a[T][200], b[T][200][200];
    for(i=0; i<T; i++)
        scanf("%s", a[i]);

    for(i=0; i<T; i++)
    {
        for(j=0, l=0, r=0; j<200; j++, r++)
        {
            if(a[i][j]=='\0')
                break;
            else if(a[i][j]==' ')
                l++;
            else
                b[i][l][r] = a[i][j];
        }
    }

    for(i=0; i<T; i++)
    {
        printf("case #%d:\n", i);
        for(j=0, l=0, r=0; j<200; j++, r++)
        {
            if(a[i][j]=='\0')
                printf("\n");
            else if(a[i][j]==' ')
                l++;
            else
                b[i][l][r] = a[i][j];
        }
    }
}