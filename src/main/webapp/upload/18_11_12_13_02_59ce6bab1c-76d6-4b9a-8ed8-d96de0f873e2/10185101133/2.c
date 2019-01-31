#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void change(int st,int ed){
    int count=0;
    while(st<=ed){
        if(isgraph(st)){
            printf("%-8d",st);
            printf("%c\n",st);
            st++;count++;}
        else
            st++;
    }
    if(count==0)
        printf("NONE");
    return;
}


int main()
{
    int st,ed;
    scanf("%d %d",&st,&ed);
        change(st,ed);
    return 0;
}

