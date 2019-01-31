#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    char month[12][13]={"January","February","March","April","May","June","July",
						"August","September","October","November","December"};
    printf("%s\n",month[m-1]);
    return 0;
}