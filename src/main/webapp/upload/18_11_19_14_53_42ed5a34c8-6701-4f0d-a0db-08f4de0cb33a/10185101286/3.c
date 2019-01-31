#include<stdio.h>
void fun();
int main()
{
    fun();
    return 0;
}
void fun()
{
    int shu;
    static int i=1;
    scanf("%d",&shu);
    if(shu>0)
    {
        fun();
        if(i==1)
        {
          printf("%d",shu);
          i=0;
        }
        else printf(" %d",shu);
    }
}
