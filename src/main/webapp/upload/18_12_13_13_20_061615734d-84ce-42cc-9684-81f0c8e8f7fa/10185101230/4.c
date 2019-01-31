#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int i=0;
    scanf("%d",&n);
    char str1[1000][1000];
    for(i=0;i<=n;i++){
    gets(str1[i]);
    func(str1[i]);
    }
    for(i=1;i<n;i++){
    printf("case #%d: ",i-1);
    puts(str1[i]);}
    printf("case #%d: %s",n-1,str1[n]);
}
void func(char *p)
{
    char ch;
    while(*p)
    {   ch=*p;
        if(isalpha(*p)&&(*p!='Z'))
            *p=ch+1;
        else if(*p=='Z')
            *p='A';
        p++;
    }
}
