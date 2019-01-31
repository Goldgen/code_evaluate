#include <stdio.h>
#include <stdlib.h>

int tentime(int x)
{
    int w;
    long int sum=1;
    for(w=0;w<x;++w)
        sum=sum*10;
    return sum;
}
int main()
{
   long int a,b,c;
   while(scanf("%ld+%ld=%ld",&a,&b,&c)!=EOF)
   {
   int i,num;
   for(i=12;i>=-12;--i){
    if(i<0&&(b*tentime(-i)+a==c)){
            num=i;
            break;
            }

    if(i>=0&&(a*tentime(i)+b==c)){
            num=i;
            break;
            }
    }
     printf("%d",num);
}
    return 0;
}







