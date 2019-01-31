#include <stdio.h>
void Number2Alpha(char *ps,int n)
{
    char month[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int i=0;
    for(i=0;month[n-1][i]!='\0';i++){
        *ps=month[n-1][i];
        *ps++;
    }
}
int main()
{
    int n=0;
    char s[100];
    scanf("%d",&n);
    Number2Alpha(s,n);
    printf("%s\n",s);
    return 0;
}
