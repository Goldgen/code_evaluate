

#include<stdio.h>
char result(int);
int main()
{
    int st,ed;
    char shu;
    scanf("%d %d",&st,&ed);
    if((st>0&&st<127)&&(ed>0&&ed<127)&&(st<ed))
        {
            while(st<ed)
            {
                printf("%-8d",st);
                shu=result(st);
                printf("%c",shu);
                printf("\n");
                st++;
            }
            printf("%-8d",st);
            shu=result(st);
            printf("%c",shu);
        }
    else
        printf("NONE");
    return 0;
}
char result(int x)
{
    char result =x;
    return result;
}
