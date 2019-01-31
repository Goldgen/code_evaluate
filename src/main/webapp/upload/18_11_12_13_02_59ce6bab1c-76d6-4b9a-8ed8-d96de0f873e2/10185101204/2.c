#include <stdio.h>
#include <ctype.h>
int main()
{int st,ed,a,b;
scanf("%d %d",&st,&ed);
for(;st<=ed;st++)
    {a=isgraph(st);
	 if(a!=0)
    {printf("%-8d%c",st,st);
     break;}
    if(st==ed)
    {printf("NONE");
         break;}}
    st++;
for(;st<=ed;st++)
    {b=isgraph(st);
	if(b!=0)
    printf("\n%-8d%c",st,st);}
}