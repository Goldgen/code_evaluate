#include <stdio.h>

int main()
{

    int count;
    scanf("%d",&count);             
    int Nums[count];
    for(int i=0;i<count;i++)
        scanf("%d",&Nums[i]);

    int DeleteNum;             
    int DeleteIndex = -1;         

    int i;                        



        scanf("%d", &DeleteNum);
        for(i = 0; i < count; i++)      
        {
            if(DeleteNum == Nums[i])
            {
                DeleteIndex = i;
                break;                   
            }
        }
 
        if(DeleteIndex == -1)
        {
            printf("ERROR");
        }
        else
        {
           
            for(i = DeleteIndex; i < count - 1; i++)
            {
                Nums[i] = Nums[i+1];
            }
                count--;

            for(i = 0; i < count-1; i++)
            {
                printf("%d ", Nums[i]);
            }
            printf("%d",Nums[count-1]);
        }

    return 0;
}
