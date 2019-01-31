#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int i,j,k,m,l;
    char s[10000];
    char t[10000];
	scanf("%s",s);
	scanf("%s",t);
	j=strlen(s);
	k=strlen(t);

	if(j<k) m=j;
	else m=k;

	for(i=0;i<m;i++)
	{
	    printf("%c",s[i]);
	    printf("%c",t[i]);
	}
	if(j<k)
    {
        for(l=m;l<k;l++)
        printf("%c",t[l]);
        }
    if(j>k)
    {
        for(l=m;l<j;l++)
        printf("%c",s[l]);
        }
 return 0;
}
