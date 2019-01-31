#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);

    for(c=a;c<b;c++)
	    if(isgraph(c))
			printf("%-8d%c\n",c,c);
	if(isgraph(b))
        printf("%-8d%c",b,b);
    for(d=a;d<=b;d++)
        {
            if(!isgraph(d))
            {
                if(d==b)
                    printf("NONE");
            }
            else
                break;
        }
}
