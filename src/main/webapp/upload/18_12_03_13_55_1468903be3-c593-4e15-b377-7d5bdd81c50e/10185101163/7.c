#include<stdio.h>>
#include<string.h>

void LongestWord( char Arr[],char *c[])
{
    char a[81];
    int i,j;
    for(j=0;j<strlen(Arr);j++)
    {
        if((Arr[j]==' ')||(Arr[j]=='\0'))    j++;
        for(i=0;Arr[j]!=' '&&Arr[j]!='\0';i++,j++)     a[i]=Arr[j];
        a[i]='\0';
        if(strlen(c)<strlen(a))    strcpy(c,a);
    }
}
int  main()
{   char ch1[81],ch2[81];
    gets(ch1);
    LongestWord(ch1,ch2);
    printf("%s\n",ch2);
    return 0;
}
