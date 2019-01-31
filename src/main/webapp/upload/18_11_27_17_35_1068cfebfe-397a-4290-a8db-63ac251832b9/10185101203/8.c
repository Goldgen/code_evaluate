#include <stdio.h>

int main()
{

    int count,j;
    scanf("%d",&count);
    int Nums[count];
    for(int i=0;i<count;i++)
        scanf("%d",&Nums[i]);
    int i,a=1;
    for(i = 0,j = 1; i < count; i++)
        {
            if(Nums[i]== Nums[i+1])
            {
                j++;
                if(j>a)
                    a=j;
            }
            else
                j=1;
        }

        printf("%d",a);
    return 0;
}
