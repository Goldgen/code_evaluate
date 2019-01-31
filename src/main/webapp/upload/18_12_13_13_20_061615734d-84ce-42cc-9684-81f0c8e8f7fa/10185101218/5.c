#include <stdio.h>
#include <string.h>

void Number2Alpha(int num,char** mptr)
{
    *mptr += (num-1)*15;

}

int main(void)
{
    char months[12][15] = {"January","February","March","April","May","June",
                           "July","August","September","October","November","December"};
    int n = 0;
    scanf("%d",&n);
    char* p = months[0];
    char** pd = &p;
    Number2Alpha(n,pd);
    printf("%s",p);
    return 0;
}
