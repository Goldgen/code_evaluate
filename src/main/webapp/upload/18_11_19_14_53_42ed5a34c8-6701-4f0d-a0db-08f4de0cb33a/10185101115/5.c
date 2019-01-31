#include <stdio.h>
#include <stdlib.h>

int GDB(int,int);

int main ()
{int a,b;
scanf("%d %d",&a,&b);
GDB(a,b);
}

int GDB(int a,int b)
{int temp=a%b;
if(temp==0)
{
    printf("%d",b);
}
else
{
    return GDB(b,temp);

}
}
