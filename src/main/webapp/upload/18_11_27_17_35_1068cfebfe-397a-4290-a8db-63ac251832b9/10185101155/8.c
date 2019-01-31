#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    int b[t];
    for(int x=0;x<t;x++)
        scanf("%d",&a[x]);
    int length = 1;
    for(int x =0;x<t-1;x++)
    {
        if(a[x]==a[x+1])
            length++;
        else
            length = 1;
            b[x]=length;
    }
    int lengthMAX;
    lengthMAX=b[0];
    for(int x=0;x<t-1;x++)
     lengthMAX=(lengthMAX>b[x])?lengthMAX:b[x];
    printf("%d\n",lengthMAX);

    return 0;
}