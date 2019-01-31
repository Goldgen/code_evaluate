#include<stdio.h>

int main()
{
turn ();
return 0;
}

int dot=0;

int turn ()
{
    int num;
    scanf("%d",&num);
    if(num>0)
        turn();
        else
            {dot=1;return;}
        if(dot)
        {
         printf("%d",num);
         dot=0;   
        }
        else printf(" %d",num);
}