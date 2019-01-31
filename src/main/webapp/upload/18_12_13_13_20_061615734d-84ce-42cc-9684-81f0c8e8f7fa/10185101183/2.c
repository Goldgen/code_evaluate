#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[81];
    char p[81];
    gets(t);
	int m;
    scanf("%d",&m);
    int n=0;
    for(int j=m;t[j]!='\0';++j)
    {
        p[n]=t[j];
        ++n;
    }
    p[n]='\0';
    printf("%s",p);
}
