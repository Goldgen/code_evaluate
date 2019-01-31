#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

_Bool graph(int a);
int main(void)
{
    int st,ed;
    scanf("%d %d",&st,&ed);
    int i;int count=0;

    for(i=st;i<=ed;++i){
        if(graph(i)) {
            printf("%-8d%c",i,i);
            ++count;
            if(count<=(ed-st)) printf("\n");
        }
    }
    if(count==0) printf("NONE");
    return 0;
}
_Bool graph(int a){
    _Bool result;
    result = isgraph(a);
    return result;
}
