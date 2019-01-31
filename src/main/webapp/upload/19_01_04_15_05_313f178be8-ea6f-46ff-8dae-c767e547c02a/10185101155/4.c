#include<stdio.h>
#include<string.h>
#include <stdbool.h>
typedef struct
{
    char a;
    int n;
}stringwe;
int  serach(stringwe our[],char c)
{
    int x=0;
    for(x=0;x<101;x++)
    {
        if(our[x].a==c)
            return x;
    }
    return -1;
}
int main()
{
   char str1[101];
   int y=0;
   stringwe student[101];
    for(y=0;y<101;y++)
    {
        student[y].a =' ';
        student[y].n = 0;
    }
   gets(str1);
   int i=1;
   int x=0,t=0;
   for(i=0;str1[i]!='\0';i++)
   {
       if(str1[i]!=' ')
       {
       if(serach(student,str1[i])==-1)
       {
           student[t].a = str1[i];
           student[t].n = 1;
           t++;
       }
       else
       {
           int temp = serach(student,str1[i]);
           (student[temp].n)++;
       }
       }
   }
   for(x=0;x<101;x++)
   {
       if(student[x].a!=' ')
       {
           printf("%c %d; ",student[x].a,student[x].n);
       }
   }
   return 0;
   }