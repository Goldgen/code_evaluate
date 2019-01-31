#include <stdio.h>
int main()
{
    char a[100];
    int c =0;
    while (a[100]=getchar()!=EOF)
    {
       if(a=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
       c=1;
		else if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
			c=1;

    }
    if(c==1)
        printf("yes");
    else
        printf("no");
    return 0;
}