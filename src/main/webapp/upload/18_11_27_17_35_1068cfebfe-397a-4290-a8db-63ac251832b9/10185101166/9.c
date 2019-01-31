#include <stdio.h>
#include <string.h>

#define m 1000

void longadd(char* a,char* b ,int* c)
{
    int n1[m];
    int n2[m];
    int n3[m];
    int i;

    int len1 = strlen(a);
    for( i = 0; i < len1; i++)
    {
        n1[i] = a[len1-1-i] - '0';
    }
    int len2 = strlen(b);
    for( i = 0; i < len2; i++)
    {
        n2[i] = b[len2-1-i] - '0';
    }
    for( i = 0; i < m; i++)
    {
        n3[i] = n1[i] + n2[i];
    }
    for( i = 0; i < m; i++)
    {
        if(n3[i] >= 10)
        {
            n3[i+1] += n3[i] / 10;
            n3[i] = n3[i] % 10;
        }
        c[i] = n3[i];
    }

    return;
}
int main(int argc, char const *argv[])
{
    char b1[m];
    char b2[m];
    int n[m];
    gets(b1);
    gets(b2);
    longadd(b1,b2,n);
    int z = 0;
    for(int j = m -1 ; j >= 0 ; j-- )
    {
        if(z == 0)
        {
            if(n[j] != 0)
            {
                printf("%d",n[j]);
                z= 1;
            }
        }
        else
        {
            printf("%d",n[j]);
        }   
    }
    if( z== 0)
    {
        printf("0\n");
    }

    return 0;
}