#include <stdio.h>
int main()
{
    int me,fe,cd;
    int i,j;
    for(i=1;(100-7*i)>6;i++)
    {
        for(j=1;(100-7*i-5*j)>0;j++)
        {
            me=i;
            fe=j;
            cd=(100-7*i-5*j)*3;
            if(me+fe+cd==100)
                printf("%d %d %d",me,fe,cd);
            else
                continue;
        }
    }
    return 0;
}