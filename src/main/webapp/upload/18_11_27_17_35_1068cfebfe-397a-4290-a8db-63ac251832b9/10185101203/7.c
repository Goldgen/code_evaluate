#include <stdio.h>

int main()
{

    int count,j;
    scanf("%d",&count);
    int Nums[count],a[100];
    for(int i=0;i<count;i++)
        scanf("%d",&Nums[i]);

    int DeleteNum;
    int DeleteIndex=-1;

    int i;



        scanf("%d", &DeleteNum);
        for(i = 0,j = 0; i < count; i++)
        {
            if(DeleteNum == Nums[i])
            {
                DeleteIndex = i;
                a[j]=DeleteIndex;
                j++;
            }
        }

        if(DeleteIndex == -1)
        {
            printf("ERROR");
        }
        else
        {for(i=0;i<j-1;i++)
        printf("%d ",a[i]);

        printf("%d",a[j-1]);}


    return 0;
}
