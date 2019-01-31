#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i;
    char ch[80];
    scanf("%s",ch);
    int n=strlen(ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]=='a'||ch[i]=='b'||ch[i]=='c')
            printf("2");
        if(ch[i]=='d'||ch[i]=='e'||ch[i]=='f')
            printf("3");
            if(ch[i]=='g'||ch[i]=='h'||ch[i]=='i')
            printf("4");
            if(ch[i]=='j'||ch[i]=='k'||ch[i]=='l')
            printf("5");
            if(ch[i]=='m'||ch[i]=='n'||ch[i]=='o')
            printf("6");
            if(ch[i]=='p'||ch[i]=='q'||ch[i]=='r'||ch[i]=='s')
            printf("7");
            if(ch[i]=='t'||ch[i]=='u'||ch[i]=='v')
            printf("8");
            if(ch[i]=='w'||ch[i]=='x'||ch[i]=='y'||ch[i]=='z')
            printf("9");
    }
return 0;
}
