#include <stdio.h>
void y(char *x)
{ while (*x!='\0')
    {
    if (*x=='Z') *x='A';
    else ++*x;
    ++x;}
}
int main()
{
int T;
char *flag;
scanf("%d\n",&T);
 char a[T][51];
 for (int i=0;i<T;++i)
 {
     gets(a[i]);
 }
 for (int i=0;i<T;++i)
 {
     flag=a[i];
     y(flag);
 }
 for (int i=0;i<T;++i)
 {
     printf("case #%d: %s\n",i,a[i]);
 }
 return 0;
}

