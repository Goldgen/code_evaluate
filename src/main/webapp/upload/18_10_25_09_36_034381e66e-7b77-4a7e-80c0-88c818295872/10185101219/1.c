#include <stdio.h>
#include <stdlib.h>

int main()
{
float sn=100.0,hn=sn/2;
int n;
for(n=2;n<=10;n++)
{
sn=sn+2*hn;
hn=hn/2;
}
printf("%.3f %.3f",sn,hn);

}
