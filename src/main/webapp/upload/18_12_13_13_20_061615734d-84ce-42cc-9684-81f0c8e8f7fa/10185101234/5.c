#include <stdio.h>
#include <stdlib.h>
void Number2Alpha(int num,char** mptr)
{
    char *a[]= {"January", "February", "March", "April", "May", 
				"June", "July", "August", "September", "October", "November", "December"};
    mptr=a;
    printf("%s",*(mptr+num-1));
}
int main()
{
    char **pmonth;
    int n;
    scanf("%d", &n);
    Number2Alpha(n,pmonth);
    return 0;
}