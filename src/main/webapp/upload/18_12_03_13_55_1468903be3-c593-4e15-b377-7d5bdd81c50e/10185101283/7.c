#include<stdio.h>
#include<string.h>
int main()
{
    char s[80][81];
    int a[80];
    int i,max;
    for(i=0;;++i)
    {
        if((scanf("%s",s[i]))==0);
            break;
        a[i]=strlen(s[i]);
    }
    for(int j=0,max=j;j<i-1;++j)
    {
        if(a[j]>a[j+1])
            max=j;
    }
    printf("%s\n",s[max]);
    return 0;
}