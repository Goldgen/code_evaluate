#include <stdio.h>
#include <string.h>
int main()
{
    int h,i,j;
    char a[10][100];
    scanf("%d",&j);
    getchar();
    for(i=0;i<j;i++)
        gets(a[i]);
    for(i=0;i<j;i++)
    {
        for(h=0;h<j-1;h++)
        {
            if(strcmp(a[h],a[h+1])<0)
            {
                char b[100];
                strcpy(b,a[h]);
                strcpy(a[h],a[h+1]);
                strcpy(a[h+1],b);
            }
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%s",a[i]);
        if(i<j-1)
            printf("\n");
    }
    return 0;
}
