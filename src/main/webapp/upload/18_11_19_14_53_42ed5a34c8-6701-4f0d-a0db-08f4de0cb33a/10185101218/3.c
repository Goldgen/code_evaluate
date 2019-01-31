#include<stdio.h>
int function(void);

int main(void)
{
   function();
   return 0;
}

int function()
{
    static int n=0;
    int num;
    scanf("%d",&num);
    if(num>0){
        function();
        if(n==0)
            printf("%d",num);
        else
            printf(" %d",num);
        n++;
    }
    return 0;
}
