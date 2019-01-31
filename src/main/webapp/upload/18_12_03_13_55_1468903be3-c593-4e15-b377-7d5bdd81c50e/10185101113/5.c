#include <stdio.h>
#include <string.h>
void right1(char arr[],int i)
{
    char ch;
    ch=arr[i-1];
    for(int j=i-1;j>0;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[0]=ch;
    return;
}
int check(char str1[],char str2[])
{
    int i=strlen(str2);
    if(!strcmp(str1,str2))
        return 1;
    for(int j=0;j<i;j++)
      {
        right1(str2,i);
        if (!strcmp(str1,str2))
            return 1;
      }
        return 0;
}
int main()
{
    char a[81],b[81];
    char c[81];
    int m,n;
    scanf("%s",a);
    scanf("%s",b);
    m=strlen(a);
    n=strlen(b);
    strcpy(c,b);
    if(m==n)
    {
        if(check(a,b))
            printf("\"%s\" is a rotation of \"%s\"",a,c);
        else
            printf("\"%s\" is NOT a rotation of \"%s\"",a,c);

    }
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",a,c);

    return 0;
}