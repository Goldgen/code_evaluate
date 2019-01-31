#include <stdio.h>
#include <ctype.h>
int main(){
    int st,ed,x=0;
    scanf("%d %d",&st,&ed);
for(char ch=st;ch<=ed;ch++){
        if(ch==127)
        return 0;
        int t=isgraph(ch);
    if(t){
            x++;
        printf("%d    ",ch);
        if(ch>=100)
        printf(" ");
        else
        printf("  ");
        printf("%c",ch);
        if(ch!=ed&&ch!=126)
            printf("\n");
        }
    }
    if(!x)
        printf("NONE");
}
