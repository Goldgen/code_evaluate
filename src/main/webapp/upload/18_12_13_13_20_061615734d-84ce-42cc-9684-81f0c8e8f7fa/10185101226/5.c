
#include <stdio.h>
#include <stdlib.h>

void Number2Alpha(int num)
{
	char month[13][81]={"a\0","January\0","February\0","March\0","April\0",
						"May\0","June\0","July\0","August\0","September\0",
						"October\0","November\0","December\0"
	};
    printf("%s",month[num]); 
}
int main()
{
    int num;
    char mptr[81];
    scanf("%d",&num);
    Number2Alpha(num);
    return 0;
}