#include<stdio.h>
#include<math.h>
int main (void)
{
    char ch,ch1;
    printf("");
    scanf("%c",&ch);
    if(ch>=65&&ch<=92)
   {
       ch1=ch-'A'+'a';
        printf("%c",ch1);
   }
    else
        printf("ERROR");

}