#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,max= 1;
    scanf("%d", &n);
    int b[n][2];
for(i=0;i<n;i++)
{
scanf("%d ", &b[i][0]);
b[i][1] = 1;
}
for(i=1;i<n;i++)
{
if(b[i][0] == b[i-1][0])
{
    b[i][1] += b[i-1][1];
    if(max < b[i][1])
    max=b[i][1];
}
}
printf("%d", max);

return 0;
}
