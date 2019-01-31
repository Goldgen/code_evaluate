#include<stdio.h>
#include<stdlib.h>
#include<string.h>
unsigned hex2int(char s[])
{
    int i,num=0;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='f')
            num=16*num+s[i]-'a'+10;
        else if(s[i]>='0'&&s[i]<='9')
            num=16*num+s[i]-'0';
        else if(s[i]>='A'&&s[i]<='F')
            num=16*num+s[i]-'A'+10;
    }
    return num;
}
int main()
{
    char input[8];
    gets(input);
    printf("%u",hex2int(input));
    return 0;
}


