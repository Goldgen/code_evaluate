#include <stdio.h>
#include <ctype.h>
void zifu(int a){
    if(isgraph(a)!=0)
        printf("\n%-3d     %c",a,a);
}
int main()
{
    int a,b,i,n;
    n=0;
    scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
    {
        if(isgraph(i)!=0){
            if(n==0)
            printf("%-3d     %c",i,i);
            else
            zifu(i);
            n++;
        }
    }
    if(n==0)
        printf("NONE");
return 0;
}
