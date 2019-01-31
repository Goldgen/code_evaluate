#include <stdio.h>
int main()
{
    char a,b,c,d,e,f,g,h,i,j;
    int num=0;
    scanf("%c%c%c%c%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    switch(tolower(a))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u': {printf("yes");num++;return 0;break;}
    default: break;
    }
        switch(tolower(b))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u':{printf("yes");num++;return 0;break;}
    default: break;
    }
        switch(tolower(c))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u':{printf("yes");num++;return 0;break;}
    default: break;
    }
        switch(tolower(d))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u':{printf("yes");num++;return 0;break;}
    default: break;
    }
        switch(tolower(e))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u': {printf("yes");num++;return 0;break;}
    default: break;
    }
        switch(tolower(f))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u':{printf("yes");num++;return 0;break;}
    default: break;
    }
        switch(tolower(g))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u':{printf("yes");num++;return 0;break;}
    default: break;
    }
        switch(tolower(h))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u': {printf("yes");num++;return 0;break;}
    default: break;
    }
        switch(tolower(i))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u':{printf("yes");num++;return 0;break;}
    default: break;
    }
        switch(tolower(j))
    {
    case 'a':case 'e':case 'i':case 'o':case 'u': {printf("yes");num++;return 0;break;}
    default: break;
    }
    if (num==0)
    printf("no");


}
