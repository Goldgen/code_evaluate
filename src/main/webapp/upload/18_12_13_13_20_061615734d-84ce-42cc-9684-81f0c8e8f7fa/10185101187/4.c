#include <stdio.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);
    char a[T][100];
    for(i=0; i<=T; i++)
        gets(a[i]);

    for(i=1; i<=T; i++)
        for(j=0; j<100; j++)
        {
            if(a[i][j]=='\0')
                break;
            else if(a[i][j]=='Z')
                a[i][j] = 'A';
            else
                a[i][j]++;
        }

    for(i=1; i<=T; i++)
    {
        if(i!=1)
            printf("\n");
        printf("case #%d: ", i-1);
        printf("%s", a[i]);
    }
}
