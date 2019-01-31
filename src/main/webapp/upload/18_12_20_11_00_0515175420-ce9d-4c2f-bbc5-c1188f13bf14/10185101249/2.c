#include <stdio.h>
#include <string.h>
int get(char *arr,char *ww[])
{
    int i=0;
    char *p;
    p=strtok(arr," ");
    while(p!=NULL)
    {
        ww[i]=p;
        i++;
        p=strtok(NULL," ");
    }
    return i;
}
void cmp(char *arr[],int n)
{
    char *p;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                p=arr[i];
                arr[i]=arr[j];
                arr[j]=p;
            }
        }
    }
}
int main()
{
    int n,i,j,num;
    char arr[100];
    char *ww[100];
    scanf("%d\n",&num);
    for(i=0;i<num;i++)
    {
        gets(arr);
        n=get(arr,ww);
        printf("case #%d:\n",i);
        for(j=0;j<n;j++)
        {
            puts(ww[j]);
        }
        if(i<n-1)
            printf("\n");
    }
    return 0;
}

