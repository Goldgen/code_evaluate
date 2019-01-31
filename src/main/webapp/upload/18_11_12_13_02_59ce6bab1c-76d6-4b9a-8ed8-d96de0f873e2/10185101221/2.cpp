#include <stdio.h>
#include <ctype.h>

void zimu(int a,int b)
{
	int i = 0;
    for(;a <= b	;a++)
	{
	    char aa = a;

		if(isgraph(aa))
		{
		    if(a==126)
                printf("%-8d%c",a,aa);
		    else if(a < b)
			  printf("%-8d%c\n",a,aa);
			else
              printf("%-8d%c",a,aa);
			i++;
		}
	}
	if(i==0)
		printf("NONE");
	return;
}

int main()
{
     int st = 0,ed = 0;
	 scanf("%d %d",&st,&ed);
	 zimu(st,ed);
	 return 0;
}

