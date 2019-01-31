#include<stdio.h>
#include<ctype.h>
void change(int,int);
int main()
{
    int st,ed;
    scanf("%d %d",&st,&ed);
    change(st,ed);
    return 0;
}
void change(int st,int ed){
    int ch;
    int k=0;
    for (ch=st;ch<=ed;ch++)
    {
        if isgraph(ch)
            {
                if(ch>=100)
                    printf("%d     %c",ch,ch);
                else
                    printf("%d      %c",ch,ch);
                k++;
                if(ch!=ed)
                    printf("\n");
            }
    }
    if(k==0)
        printf("NONE");
    return;
}


