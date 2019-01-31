#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    char b='A';
    for(int i=0;i<a;++i)
    {
      for(int j=0;j<a-1-i;++j)
            printf(" ");
      for(int k=0;k<(2*(i+1))-1;++k)
            printf("%c",b);
      b+=1;
      printf("\n");
    }
    for(int i=0;i<a-1;++i)
    {
        for(int j=0;j<i+1;++j)
            printf(" ");
        for(int k=0;k<((a-i-1)*2)-1;++k)
            printf("%c",b);
        b+=1;
        if(i!=a-2)
            printf("\n");
    }
    return 0;
}