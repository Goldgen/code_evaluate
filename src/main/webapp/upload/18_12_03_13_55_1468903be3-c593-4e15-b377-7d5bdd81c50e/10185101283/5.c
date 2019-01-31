#include<stdio.h>
#include<string.h>
int f(char *s1,int m,char *s2,int n)
{
    if(m!=n)
        return 0;
    char temp;
        for(int a=0;a<m;++a)
        {
            temp=s1[m-1];
            for(int b=0;b<m-1;++b)
                s1[b+1]=s1[b];
            s1[0]=temp;
            if(strcmp(s1,s2)==0)
                return 1;
        }
}
int main()
{
    char s1[80],s2[80];
    int i=0,j=0;
    for(;;++i)
    {
        s1[i]=getchar();
        if(s1[i]==' ')
            break;
    }
    for(;;++j)
    {
        s2[j]=getchar();
        if(s2[j]=='\n')
            break;
    }
    printf("\"");
    for(int a=0;a<i;++a)
        printf("%c",s1[a]);
    printf("\" is ");
    if(!f(s1,i,s2,j))
        printf("NOT ");
    printf("a rotation of \"");
    for(int b=0;b<j;++b)
        printf("%c",s2[b]);
    printf("\"");
    return 0;
}