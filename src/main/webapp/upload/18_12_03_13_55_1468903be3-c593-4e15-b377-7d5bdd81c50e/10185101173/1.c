#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[40],dig[40];
    int i=0;
    while((arr[i]=getchar())!=EOF)
    {
        if(arr[i]=='a'||arr[i]=='b'||arr[i]=='c')
            dig[i]='2';
        else if(arr[i]=='d'||arr[i]=='e'||arr[i]=='f')
            dig[i]='3';
        else if(arr[i]=='g'||arr[i]=='h'||arr[i]=='i')
            dig[i]='4';
        else if(arr[i]=='j'||arr[i]=='k'||arr[i]=='l')
            dig[i]='5';
        else if(arr[i]=='m'||arr[i]=='n'||arr[i]=='o')
            dig[i]='6';
        else if(arr[i]=='p'||arr[i]=='q'||arr[i]=='r'||arr[i]=='s')
            dig[i]='7';
        else if(arr[i]=='t'||arr[i]=='u'||arr[i]=='v')
            dig[i]='8';
        else if(arr[i]=='w'||arr[i]=='x'||arr[i]=='y'||arr[i]=='z')
            dig[i]='9';
        ++i;
    }
    if(i>=8)
    {
         for(i=0;i<8;++i)
            printf("%c",dig[i]);
    }
    return 0;
}
