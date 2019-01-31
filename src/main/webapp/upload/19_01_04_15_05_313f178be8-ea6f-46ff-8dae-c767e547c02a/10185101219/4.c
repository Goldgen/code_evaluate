#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct appear app;

struct appear
{
    char name;
    int time;
};
int main()
{
   char stri[101];
   app str[101];
    int i1=0;
    for(;i1<101;i1++)
    {
        str[i1].time=0;
    }
    gets(stri);
    stri[strlen(stri)]='~';
    str[0].name=stri[0];
    str[0].time++;
    int i=1,tag=0;
    while(stri[i]!='~')
    {
        if(stri[i]==' '){
            i++;
            continue;
        }
        int w,tt;
        tt=0;
        for(w=0;w<=tag;w++){
            if(stri[i]==(str[w].name)){
                str[w].time++;
                tt++;}
        }
        if(tt==0)
        {
            tag++;
            str[tag].name=stri[i];
            str[tag].time++;
        }
        i++;
    }
   
    int i2;
    for(i2=0;i2<=tag;++i2)
    printf("%c %d; ",str[i2].name,str[i2].time);
    return 0;
}
