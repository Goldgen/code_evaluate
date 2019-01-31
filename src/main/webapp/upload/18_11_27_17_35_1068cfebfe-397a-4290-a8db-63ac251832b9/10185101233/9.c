#include<stdio.h>
int main()
{
    char shu_1[1];
    char shu_2[1];
    char shu[1];
    scanf("%c\r",&shu_1[0]);
    scanf("%c",&shu_2[0]);
    shu[0]=shu_1[0]+shu_2[0];
    printf("%c",shu[0]);
    return 0;
}