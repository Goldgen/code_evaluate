#include<stdio.h>
int main()
{
    int x,y,z,one,two,three,median;
    scanf("%d %d %d",&x,&y,&z);
    if(x>=y)
        {
            one=x;
            two=y;
        }
    else
    {
        one=y;
        two=x;
    }
    if(one>=z)
    three=z;
    else
        three=one;
    if(three>=two)
        median=three;
    else
        median=two;
    printf("%d",median);
    return 0;

}
