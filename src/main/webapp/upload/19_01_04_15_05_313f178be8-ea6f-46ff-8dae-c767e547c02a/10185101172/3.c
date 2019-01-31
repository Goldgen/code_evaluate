#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000],b[1000];
    int i,j,count=0;

    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"#")==0)
            break;
        scanf(" %s",b);
        int n=strlen(a);
        int sub_n=strlen(b);
        for (i = 0; i <= n - sub_n; i++)
	    {
		for (j = 0; j < sub_n; j++)
		{

			if (a[i++] != b[j])
				break;
		}
        if(j==sub_n)
            count++;
          i--;
        }
        printf("%d\n",count);
    }
    return 0;
}
