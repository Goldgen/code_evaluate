#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[81];
    char find[81];
    int time=0,i=0;
    int diff=0;
    int position=-1;
        gets(text);
        gets(find);
    for(;i<=strlen(text);++i)
    {
        if(text[i]==find[0]){
            diff=0;
        for(int j=0;j<strlen(find);++j){
            if(text[j+i]!=find[j])
                diff++;
            }
        if(diff==0)
            time++;
        if(time==1)
            position=i;
        }
        else
        continue;

    }
    printf("%s: %d time(s), first at %d",find,time,position);
    return 0;
}
