#include <stdio.h>
#include <ctyoe.h>
int main()
{
char x[20];
int i=0,k=0;
int sum=0;
for(;i<20;++i)
    scanf("%c",&x[i]);
for(;k<20;++i)
{
    x[k]=tolower(x[k]);
    if(x[k]=='a')
     sum=sum+1;
    if(x[k]=='e')
     sum=sum+1;
    if(x[k]=='i')
     sum=sum+1;
    if(x[k]=='o')
     sum=sum+1;
    if(x[k]=='u')
    sum=sum+1;
    else
    sum=sum;
}
if(sum!=0)
    printf("yes");
else
    printf("no");
return 0;

}
