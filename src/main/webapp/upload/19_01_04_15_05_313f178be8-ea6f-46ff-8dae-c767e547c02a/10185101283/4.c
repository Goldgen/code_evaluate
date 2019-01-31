#include<stdio.h>
#include<string.h>
typedef struct {
  char ch;
  int x;
}data;
typedef struct {
   data p[100];
   int count;
}czy;
int find(czy sz,char a)
{
    int i=0;
    while(i<sz.count)
    {
        if(a==sz.p[i].ch)
            return i;
        ++i;
    }
    return i;
}
int main()
{
    char s[110];
    scanf("%s",s);
    int n=strlen(s);
    czy sz={0};
    int i=0;
    int b=0;
    char a;
    while(i<n)
    {
        a=s[i];
        if(a==" ")
        {
            ++i;
            continue;
        }
        if((b=find(sz,a))!=0)
        {
            sz.p[b].x++;
        }
        else if(find(sz,a)==0)
        {
            sz.p[sz.count].ch=a;
            sz.p[sz.count].x++;
            sz.count++;
        }
        ++i;
    }
    int j=0;
    while(j<sz.count)
    {
        printf("%c %d; \n",sz.p[j].ch,sz.p[j].x);
        ++j;
    }
    return 0;
}