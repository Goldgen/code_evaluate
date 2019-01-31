#include <stdio.h>
int a(int fr,int se);
int main()
{
     int b;
     int c;
     scanf("%d %d",&b,&c);
     a(b,c);
     return 0;
}
int a(int fr,int se)
{
    int i;
    char ch;
    int co=0;
    for(i=fr;i<=se;i++)
    {
        ch=i;
        if(isgraph(ch)&&i>=100){
                printf("%d     %c\n",i,ch);
                co=1;
        }
        else if(isgraph(ch)&&i<100){
            printf("%d      %c\n",i,ch);
            co=1;
        }
    }
    if(co!=1)printf("NONE");
}
