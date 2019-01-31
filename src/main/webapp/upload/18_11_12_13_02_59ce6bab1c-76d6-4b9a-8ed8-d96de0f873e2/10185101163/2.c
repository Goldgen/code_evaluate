#include <stdio.h>
#include <ctype.h>
int M(){
int a,b;
    scanf("%d %d",&a,&b);
    if(isgraph(a))
	{
    for(a;a<=b;a++){
        printf("%-3d%6c",a,a);
        if(a<b) printf("\n");
    }}
    else printf("NONE");}
int main()
{
    M();
    return 0;
}
