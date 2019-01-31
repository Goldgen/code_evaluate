#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n,i,j,k,l,x,y;
    char **p,*temp;
    scanf("%d",&n);
	getchar();
    p=(char**)malloc(sizeof(char*)*n);
    temp=(char*)malloc(sizeof(char)*100);
    for(i=0;i<n;i++)
    {
        *(p+i)=(char*)malloc(sizeof(char)*100);
    }
    for(j=0;j<n;j++)
    {
        gets(p[j]);
    }
    for(k=0;k<n-1;k++)
    {
        for(l=k+1;l<n;l++)
        {
            if(strcmp(p[l],p[k])<0)
            {
                temp=p[k];
                p[k]=p[l];
                p[l]=temp;
            }
        }
    }
    for(x=0;x<n;x++)
    {
        if(x==n-1)
        {
            printf("%s",p[x]);
            break;
        }
        printf("%s\n",p[x]);
    }
    for(y=0;y<n;y++)
    {
        free(p[y]);
    }
    free(p);
    return 0;
}

