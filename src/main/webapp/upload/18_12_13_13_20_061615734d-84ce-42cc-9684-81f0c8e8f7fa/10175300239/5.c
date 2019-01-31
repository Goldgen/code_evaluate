#include <stdio.h>
#include <stdlib.h>

void Number2Alpha(int num, char* mptr);

int main()
{
    int n;
    char monthName[12][10]={"January",
    "February","March","April","May",
    "June","July","August","September",
    "October","November","December"};
    scanf("%d",&n);
    Number2Alpha(n,monthName);
    return 0;
}
void Number2Alpha(int num, char* mptr){
    char *p;
    p=mptr+(num-1)*10;
    printf("%s",p);
}

