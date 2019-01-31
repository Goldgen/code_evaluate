#include <stdio.h>
#include <stdlib.h>

void NumberAlpha(int num,char* mptr){
    printf("%s",mptr+(num-1)*10);
    return;
}

int main()
{
    int num;
    char month[12][10]={{"January"},{"February"},{"March"},{"April"},{"May"},
                        {"June"},{"July"},{"August"},{"September"},{"October"},
                        {"November"},{"December"}};
    char* mptr=month;
    scanf("%d",&num);
    NumberAlpha(num,mptr);
    return 0;
}
