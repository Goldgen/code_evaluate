#include<stdio.h>
#include<ctype.h>
int prn(int);

int main()
{
    int st,ed,a,b;
    b=0;
    scanf("%d %d",&st,&ed);
    for(a=st;a<=ed;a++){
        if(prn(a)){
            printf("%-3d     %c",a,a);
        if((ed!=127&&a!=ed)||(ed==127&&a<126))
            printf("\n");
        b++;
        }
    }
    if(b==0)
        printf("NONE");
    return 0;
}

int prn(int num)
{
    if(isgraph(num))
        return num;
    else
        return 0;
}
