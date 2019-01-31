#include<stdio.h>
int main (void)
{
    int line = 0;
    int col = 0;
    int m = 0;
    int n = 0;
    scanf("%d %d",&m,&n);
    int arr[50][50];
    for(line=0;line<m;line++)
    {
        for(col=0;col<n;col++)
        {
            scanf("%d",&arr[line][col]);
        }
    }


    for(line=0;line<n;line++)
    {
        for(col=0;col<m;col++)
        {
            printf("%d",arr[col][line]);
            if(col != m-1)
                printf(" ");
        }
        if(line != n-1)
            printf("\n");
    }
}
