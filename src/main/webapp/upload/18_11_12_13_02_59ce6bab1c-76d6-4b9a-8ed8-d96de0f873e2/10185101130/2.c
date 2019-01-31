#include<stdio.h>

void num(int st,int ed);

int main(void)
{
    int st,ed;
    scanf("%d %d",&st,&ed);
    num(st,ed);
    return 0;
}

void num(int st,int ed)
{
    if(ed < 33)
        printf("NONE");
    else
    {
        for(;st <= ed;st++)
        {
            if(st >= 33 && st <= 126)
                printf("%-3d     %c\n",st,st);
        }
    }

}
