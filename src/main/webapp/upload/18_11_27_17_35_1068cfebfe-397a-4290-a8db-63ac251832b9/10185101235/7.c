#include<stdio.h>

int main(void)
{
    int i = 0;
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    int sub[n];
    int keyNum = 0;
    int checker = 0;
    int spaceChecker = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sub[i] = 0;
    }
    scanf("%d",&keyNum);

    for(i=0;i<n;i++)
    {
        if(arr[i]==keyNum)
            {
                sub[i] = 1;
                checker = 1;
            }
    }

    if(checker == 0)
    {
        printf("ERROR");
        return;
    }
    for(i=0;i<n;i++)
    {
        if(sub[i]==1)
        {
            if(spaceChecker == 1)
                printf(" ");
            printf("%d",i);
            spaceChecker = 1;
        }
    }
}

