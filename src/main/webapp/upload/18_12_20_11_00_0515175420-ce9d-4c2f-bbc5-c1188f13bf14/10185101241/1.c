#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
    char *str1=(char *)a;
    char *str2=(char *)b;
    return strcmp(str1,str2);
}

struct data
{
    char s[200];
    int w;
}Not[200];

int check(char s[])
{
    int n=strlen(s),i;
    for (i=0;i<n;i++)
        if (s[i]<'A'||s[i]>'Z') return 0;
    return 1;
}

int main()
{
   int T;
   scanf("%d",&T);
   char ch,a[200][200];
   int i,j,k,p=0,len=0;
   getchar();
   while(T--){
       int s=0,w=0;
        i=0,j=0;
        while((ch=getchar())!='\n'){
            if (ch==' ')
            {
                a[i][j++]='\0';
                if (check(a[i])==0)
                {
                    s++;
                    strcpy(Not[s].s,a[i]);
                    Not[s].w=w;
                }
                else i++;
                w++,j=0;
            }
            else a[i][j++]=ch;
        }
        {
            a[i][j++]='\0';
                if (check(a[i])==0)
                {
                    s++;
                    strcpy(Not[s].s,a[i]);
                    Not[s].w=w;
                }
                else i++;
                w++,j=0;
        }
        int n=i;
        qsort(a,n,sizeof(a[0]),cmp);
       printf("case #%d:\n",p++);
       j=1;Not[s+1].w=-1;k=0;
       for(i=0;i<n+s-1;i++)
            if (Not[j].w==i) printf("%s ",Not[j].s),j++;
            else printf("%s ",a[k]),k++;
        if (Not[j].w==n+s-1) printf("%s\n",Not[j].s),j++;
            else printf("%s\n",a[k]),k++;
}

    return 0;
}