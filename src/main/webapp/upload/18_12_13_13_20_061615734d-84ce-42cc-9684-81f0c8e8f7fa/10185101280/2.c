#include <stdio.h>


void mystrmcpy(int m,char *s1,char *s2)
{
    int len=strlen(s1);
    for(;m<=len;m++)
    {
        *(s2)=*(s1+m);
        printf("%s",s2);
    }

}
int main()
{
  char string1[81]={'\0'};
  char string2[81]={'\0'} ;
  int m;
  gets(string1);
  scanf("%d",&m);
  mystrmcpy(m,string1,string2);
    return 0;
}
