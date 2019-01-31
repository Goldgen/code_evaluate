#include<stdio.h>
#include<stdlib.h>

int sum(int a);

int main()
{
    int m=0;
    scanf("%d",&m);
    printf("%d",sum(m));

    return 0;
}

int sum(int a){
    static int s=0;
    if(a<10)
    s+=a;
    else
    {
    s+=a%10;
    sum(a/10);
    }
     return s;

}
