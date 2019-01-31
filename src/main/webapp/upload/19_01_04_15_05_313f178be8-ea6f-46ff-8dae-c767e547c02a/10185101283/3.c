#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1500],s2[1500];
    while(1)
    {
        scanf("%s",s1);
        if(strcmp(s1,"#")==0)
            break;
        scanf("%s",s2);
        char *m=s1,*n=s2;
        char *p;
        int a=strlen(s2);
        int x=0;
        while((p=strstr(m,n))!=NULL&&*m)
        {
            m=m+*p-*m+a;
            ++x;
        }
        printf("%d\n",x);
    }
    return 0;
}
