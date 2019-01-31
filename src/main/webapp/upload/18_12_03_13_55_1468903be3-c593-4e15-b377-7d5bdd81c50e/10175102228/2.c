#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void*a,const void *b)
{ return strcmp((char*)b,(char*)a);
}
int main()
{  int n;
scanf("%d",&n);
char s[10][30];
int i;
scanf("\n");
for(i=0;i<n;i++)
{ gets(s[i]);

}
qsort(s,n,sizeof(s[0]),cmp);
for(i=0;i<n;i++)
 printf("%s\n",s[i]);
return 0;
}
