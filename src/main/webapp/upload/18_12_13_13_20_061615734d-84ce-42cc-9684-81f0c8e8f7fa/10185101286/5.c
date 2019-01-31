#include<stdio.h>
#include<string.h>
void Number2Alpha(int num, char* mptr);
int main()
{
    int num;
    char month[10]={0};
    scanf("%d",&num);
    Number2Alpha(num,month);
    printf("%s",month);
    return 0;
}
void Number2Alpha(int num, char* mptr)
{
char month1[12][10]={"January","February",
"March","April","May","June","July","August",
"September","October","November","December"};
strcpy(mptr,month1[num-1]);
}