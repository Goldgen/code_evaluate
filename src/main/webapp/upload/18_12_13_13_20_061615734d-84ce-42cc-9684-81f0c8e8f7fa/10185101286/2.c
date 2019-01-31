#include<stdio.h>
#include<string.h>
char* strmcpy(char* t,char* s,int m);
int main()
{
    char sen1[81]={0};
    char sen2[81]={0};
    int number=0;
    gets(sen1);
    scanf("%d",&number);
    strmcpy(sen2,sen1,number);
    printf("%s",sen2);
    return 0;
}
char* strmcpy(char* t,char* s,int m)
{
    int i;
    int num=0;
    for(i=m;i<strlen(s);++i)
    {
        t[num]=s[i];
        num++;
    }
    t[num]=0;
}
