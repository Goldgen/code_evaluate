#include<stdio.h>
#include<stdlib.h>
int main()
{ int n;
 scanf("%d",&n);
  int i,j;
  char c='A';
  for(i=1;i<=n;i++)//输出上面的三角形，即前n行
  {  for(j=n;j>i;j--)
      printf(" ");//输出前面的空格数
      for(j=0;j<2*i-1;j++)
        printf("%c",c);
      printf("\n");//换行
       c++;//字母的改变
    }
   for(i=1;i<n;i++)//输出第n+1行至第2*n-1行
   { for(j=0;j<i;j++)
   printf(" ");//空格
    for(j=2*n-2;j>2*i-1;j--)
       printf("%c",c);
       if(i<n-1)printf("\n");
       c++;
   }
   return 0;
}