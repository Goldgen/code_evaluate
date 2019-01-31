#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int m=0;
    char c=0;
    scanf("%c",&a);
    while(c!='\n')
    {
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
       m=1;
    scanf("%c",&a);
    c=getchar();}
    if(m==1)
        printf("yes");
    else
        printf("no");
    return 0;
}
