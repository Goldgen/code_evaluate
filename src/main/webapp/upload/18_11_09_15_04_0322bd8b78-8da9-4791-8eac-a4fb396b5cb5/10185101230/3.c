#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20];
    gets(s);
    int f,b;
    f=0;
	b=0;
    while (s[b])
    {
        switch(s[b])
        {
        case'a':case'e':case'i':case'o':case'u':
            case'A':case'E':case'I':case'O':case'U':
                f++;
                default:break;
        }
		b++;
    }
    if(f==0)
        printf("no");
    else printf("yes");
    return 0;

}