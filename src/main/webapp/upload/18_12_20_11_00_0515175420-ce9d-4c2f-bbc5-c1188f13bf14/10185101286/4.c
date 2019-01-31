#include<stdio.h>
#include<string.h>
void read(char cha);
int main()
{
    char cha1;
    cha1=getchar();
    if(cha1!='?')
    {
        read(cha1);
        printf("%c",cha1);
    }
    return 0;
}
void read(char cha)
{
    char cha2;
    cha2=getchar();
    if(cha2!='?')
    {
        read(cha2);
        printf("%c",cha2);
    }
}
