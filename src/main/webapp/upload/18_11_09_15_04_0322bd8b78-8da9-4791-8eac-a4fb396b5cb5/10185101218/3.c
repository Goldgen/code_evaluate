#include<stdio.h>
int main(void)
{
    char ch;
    int a=0;
    ch=getchar();
    while(getchar!=EOF)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
           ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {a++;
            break;}
        ch=getchar();
        if(ch=='\n')
            break;
    }
    if(a!=0)
        printf("yes");
    else
        printf("no");
    return 0;
}
