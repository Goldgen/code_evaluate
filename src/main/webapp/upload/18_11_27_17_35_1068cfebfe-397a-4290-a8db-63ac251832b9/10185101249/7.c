#include <stdio.h>
int main()
{
    int i,n,key,y=-1;
    scanf("%d",&i);
    int a[]={0};
    for(n=0;n<i;n++)
    {
        scanf("%d",&a[n]);
    }
    scanf("%d",&key);
    for(n=0;n<i;n++)
    {
        if(a[n]==key)
        {
            y++;
            if(y>0)
                printf(" ");
            printf("%d",n);
        }

    }
    if(y==-1)
        printf("ERROR");
    return 0;
}
