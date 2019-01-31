#include<stdio.h>
#include <stdlib.h>
#include <string.h>

void Free(char**a, int n)
{
    for(int i=0; i<n; i++)
    {
        free(a[i]);
        a[i]=NULL;
    }
}
int isalpha(char* a)
{
    int ret=1;
    while(*a!=0)
    {
        if(*a<'A'||*a>'Z')
        {
            ret=0;
            break;
        }
        a++;
    }
    return ret;
}


void Sort(char **a, int n)
{
    char *temp=NULL;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(strcmp(a[i],a[j])>0&&(isalpha(a[i])&&isalpha(a[j])))
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    char** p;
    char a[301];
    int n,cnt=0;
    scanf("%d",&n);
    getchar();
    p=malloc(105*sizeof(char*));
    for(int i=0; i<n; i++)
    {
        cnt=0;
        gets(a);
        p[cnt++]=strtok(a," ");
        while(1)
        {

            p[cnt]=strtok(NULL," ");
            if(!p[cnt])
                break;
            cnt++;
        }
        Sort(p,cnt);
        printf("case #%d:\n",i);
        for(int j=0; j<cnt; j++)
        {
            printf("%s",p[j]);
            if(j<cnt-1)
                printf(" ");
            else if(i<n-1)
                printf("\n");
        }
    }

    //Free(p,cnt);
    return 0;
}


