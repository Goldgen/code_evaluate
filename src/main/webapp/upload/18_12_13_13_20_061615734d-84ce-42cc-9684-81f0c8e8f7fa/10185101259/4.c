#include <stdio.h>
#include <string.h>
void hs(char *p)
{   char arry[51]={'\0'};
    int len,j;
    len=strlen(p);
    for(j=0;j<len;j++)
    {
        if(p[j]=='Z')
            arry[j]='A';
        else
            arry[j]=p[j]+1;

    }
    puts(arry);

}
int main()
{   int n,i;
    scanf("%d\n",&n);
    char string[51]={'\0'};
    for(i=0;i<n;i++)
    {   strcpy(string,"\0");
        gets(string);
        printf("case #%d: ",i);
        hs(string);
    }
    return 0;
}
