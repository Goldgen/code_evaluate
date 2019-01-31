#include<stdio.h>
#include<string.h>
void sort(char **p, int n)
{
    int i,j;
    char *t;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(p[i],p[j])>0)
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }
}

int main()
{
    int i;
    int n;
    scanf("%d",&n);
    n=n+1;
    char *ptr[n];
    char a[100][100] = {0};
    for(i=0; i<n; i++)
    {
        ptr[i] = a[i];
        gets(ptr[i]);
    }
   sort(ptr, n);
    for(i=1; i<n-1; i++)
    {
        printf("%s\n", ptr[i]);
    }
printf("%s",ptr[i]);
    }

