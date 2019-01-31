#include<stdio.h>
#include<string.h>
int main()
{
   char *p,a[1000],b[1000];
   int i,j=0,m;
   p=a;
  while(1)
  {
	  scanf("%c",&a[j]);
	  if(a[j]=='\?')
		  break;
      j++;
  }
	a[j]='\0';
   m=strlen(a);
   p=p+m-1;
   for(i=0;i<m;i++)
  {
     b[i]=*p;
     p--;
  }
     b[i]='\0';
      printf("%s",b);
      return 0;
}
