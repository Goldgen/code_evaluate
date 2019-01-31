#include <stdio.h>
#include <string.h>
char *Number2Alpha(int num)
{
    static char a[12][10]={"January","February","March","April","May","June",
    "July","August","September","October","November","December"};
	return a[num-1];
}
int main()
{
    int num;
    scanf("%d",&num);
    puts(Number2Alpha(num));
    return 0;
}
