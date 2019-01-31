#include <stdio.h>
int main()
{
    int i,n,j,max=1,y=1;
    scanf("%d",&i);
    int data[]={0};
    for(n=0;n<i;n++)
    {
        scanf("%d",&data[n]);
    }
    for(n=0;n<i;n++)
    {
        for(j=n+1;j<i;j++)
      {
        if(data[n]==data[j])
        {
            y++;
            if(y>max)
                max=y;
        }
        else
            y=1;
       }
	   y=1;
    }
    printf("%d",max);
    return 0;
}
