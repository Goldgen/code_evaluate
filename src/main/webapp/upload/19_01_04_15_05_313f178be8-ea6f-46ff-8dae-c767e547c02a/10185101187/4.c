#include <stdio.h>

int main()
{
    int i, j, k, d;
    char str[110], x[110]={'\0'};
    int n[110]={0};
    gets(str);

    for(i=0, j=0; i<110; i++)
    {
        if(str[i]=='\0')
            break;
        else if(str[i]==' ')
            continue;
        else
        {
            d = 0;
            for(k=0; x[k]!='\0'; k++)
            {
                if(x[k]==str[i])
                {
                    n[k]++;
                    d = 1;
                }
            }
            if(d==0)
                {
                    x[k] = str[i];
                    n[k]++;
                }
        }
    }

    for(j=0; x[j]!='\0'; j++)
        printf("%c %d; ", x[j], n[j]);
}