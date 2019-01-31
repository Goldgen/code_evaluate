#include <stdio.h>
#include<string.h>

int isword(char *p)
{
    int i;
    for(i=0;*(p+i)!=0;i++)
	 if(*(p+i)<65||*(p+i)>91)
            return 0;
		
    return 1;
	
}

int main()
{
    int n,i;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        int j=0,l=0,col=0;
        char a[200]={0},b[200][200]={0},temp[200]={0};
        gets(a);
        for(j=0;a[j]!=0;j++)
            if(a[j]==' ')
            {
                l++;
                col=0;
            }
            else
                b[l][col++]=a[j];
        int k;
        for(j=0;j<=l;j++)
            for(k=j+1;k<=l;k++)
                if(isword(b[j])&&isword(b[k])&&strcmp(b[j],b[k])>0)
                        {
                            strcpy(temp,b[j]);
                            strcpy(b[j],b[k]);
                            strcpy(b[k],temp);
                        }
        printf("case #%d:\n",i);
        printf("%s",b[0]);
        for(j=1;j<=l;j++)
            printf(" %s",b[j]);
        printf("\n");
    }
    return 0;
}
