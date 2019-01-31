#include<stdio.h>
int change(char a)
{
   switch(a)
  {
  case '0':return 0;break;
  case '1':return 1;break;
  case '2':return 2;break;
  case '3':return 3;break;
  case '4':return 4;break;
  case '5':return 5;break;
  case '6':return 6;break;
  case '7':return 7;break;
  case '8':return 8;break;
  case '9':return 9;break;
  default: break;
   }
}
int main()
{
    int i=0,j=0;
    char x[100],y[100];
    int m[100],p[100];
    while(1)
    {
         x[i]=getchar();
        if(x[i]=='\n')
            break;
        m[i]=change(x[i]);
        ++i;
    }
    while(1)
    {
         y[j]=getchar();
        if(y[j]=='\n')
            break;
        p[j]=change(y[j]);
        ++j;
    }
    int z[100];
    int a=0,b=0;
    for(int n=i-1;n>=0;--n,++a)
    {
        if(m[n]+p[n]+b>=10)
        {
            z[n]=m[n]+p[n]+b-10;
            b=1;
        }
        else
        {
            z[n]=m[n]+p[n]+b;
            b=0;
        }
    }
    if(m[0]+p[0]>=10)
        printf("1");
    for(int o=0;o<a;++o)
      printf("%d",z[o]);
    return 0;
}