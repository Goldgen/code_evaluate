#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char mptr [12][10]={"January","February","March","April","May","June","July",
         "August","September","October","November","December"};
    printf("%s",*(mptr+n-1));
    return 0;
}
