#include <stdio.h>
#include <ctype.h>
int print(int a, int b)
{
	int flag = 0;
	for(; a < b; a++)
		if(isgraph(a))
		{
			if(a < 126)
			    printf("%-7d %c\n", a, a);
			else if(a = 126)
				printf("%-7d %c", a, a);
			flag++;
		}
	if(isgraph(b))
	{
		printf("%-7d %c", b, b);
		flag++;
	}
	if(flag == 0)
		printf("NONE");
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    print(a, b);
}