#include <stdio.h>
#include <stdlib.h>
void asc(int st,int ed)
{
    int i,j;
    i = st;
    j = ed;
if(i<=33&&j>=33)
    {for(i=33;i<=j;i++)
        {
        if(i<100)
        printf("%d%7c",i,i);
		if(i>=100)
		printf("%d%6c",i,i);	

        if(i<j) printf("\n");
        }
    }
if(i<=126&&j>=126)
    {
    for(i=st;i<=126;i++)
        {
		if(i<100)
        printf("%d%7c",i,i);
		if(i>=100)
		printf("%d%6c",i,i);	
        if(i<126) printf("\n");
        }
    }
if (i>=33&&j<=126&&i<j)
    {for(i=st;i<=j;i++)
        {
        if(i<100)
        printf("%d%7c",i,i);
		if(i>=100)
		printf("%d%6c",i,i);	
        if(i<j) printf("\n");
        }
    }
if(ed<33||st>126)
    printf("NONE");}
int main()
{
 int st,ed;
 scanf("%d %d",&st,&ed);
 asc(st,ed);
    return 0;
}
