#include<stdio.h>
#include<string.h>
#include<ctype.h>
int f(char s[]);
void sort1(char *a[],int n)
{
    char *temp;
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(strcmp(a[i],a[j])>0&&f(a[i])==0&&f(a[j])==0)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return ;
}
int f(char s[])
{
    for(int i=0;s[i]!='\0';++i)
    {
        if(!isalpha(s[i]))
            return 1;
    }
    return 0;
}
int get(char *s,char *p[])
{
    int i,j;
    int n=strlen(s);
    for(i=0;i<n;++i)
    {
        if(s[i]==' ')
            s[i]='\0';
    }
    for(i=0,j=0,p[j++]=s+i;i<n;i++)
    {
        if(s[i]=='\0')
            p[j++]=s+i+1;
    }
    return j;
}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;++i)
    {
        char s[200];
        int j=0;
        char *p[50];
        gets(s);
        j=get(s,p);
        sort1(p,j);
        printf("case #%d:\n",i);
        for(int x=0;x<j-1;++x)
            printf("%s ",p[x]);
        printf("%s\n",p[j-1]);
    }
    return 0;
}