#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    scanf("%d",&num);
    char *mptr[13]={"January","February","March","April","May","June","July",
				  "August","September","October","November","December"};
    printf("%s",mptr[num-1]);
    return 0;
}
