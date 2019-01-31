#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* i2a(char* p,int n)
{ int a[12];
  int i=0;
  while(n)
  { a[i]=n%10;
     n=(n-a[i])/10;
     i++;
    }
int j;
char *c=p;
for(j=i-1;j>=0;j--)
 *c++=a[j]+'0';
 *c='\0';
 return p;
}
int main()
{ int i;
scanf("%d",&i);
char p[20];
printf("%s",i2a(p,i));
return 0;
}