#include <stdio.h>

void Number2Alpha(int num, char* mptr)
{
    mptr+=(num-1)*10*sizeof(char);
    printf("%s",mptr);
}

int main()
{
    char month[][10]={"January","February","March","April",//????
    "May","June","July","August","September","October","November","December"};
    int n;
    scanf("%d",&n);
    Number2Alpha(n,month);
    return 0;
}
