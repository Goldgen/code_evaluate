#include <stdio.h>
#include <ctype.h>

void output(int a,int b);
int main()
{
    int st,ed;
    scanf("%d %d",&st,&ed);
    output(st,ed);
    return 0;
}
void output(int a,int b){
    int i;
    int out=0;
    for(i=a;i<=b;i++){
        if(isgraph(i)){
            out++;
            if(out==1)
                printf("%-3d     %c",i,i);
            else
                printf("\n%-3d     %c",i,i);
        }
    }
    if(out==0)
        printf("NONE");
    return;
}
