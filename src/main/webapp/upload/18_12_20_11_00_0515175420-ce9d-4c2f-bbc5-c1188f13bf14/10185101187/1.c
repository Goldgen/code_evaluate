#include <stdio.h>
#include <string.h>

void sort(char (*s)[50], int n)
{
    char temp[50];
    int i,j,k;
    for(i=0; i<n-1; i++)
    {
        k = i;
        for(j=i; j<n; j++)
        {
            if(strcmp(*(s+k),*(s+j))>0)
                k = j;
        }
        if(k!=i)
        {
            strcpy(temp,*(s+i));
            strcpy(*(s+i),*(s+k));
            strcpy(*(s+k),temp);
        }
    }
}

int main()
{
    int i, n, d=0;
    scanf("%d", &n);
    getchar();
    char s[n][50];
    for(i=0; i<n; i++)
        gets(s[i]);
    sort(s, n);
    for(i=0; i<n; i++)
    {
        if(d==0)
            d = 1;
        else
            printf("\n");
        printf("%s",s[i]);
    }
}
