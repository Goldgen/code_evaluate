#include <stdio.h>
#include <string.h>
int main()
{
     char word[100];
     int i;
     int co=0;
     scanf("%s",word);
     for(i=0;i<=strlen(word)-1;i++)
     {
         if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
            co=1;
         if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
            co=1;
     }
     if(co==1)printf("yes");
     else printf("no");
     return 0;
}
