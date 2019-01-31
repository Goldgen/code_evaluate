#include <stdio.h>
void rotate(int* p, int n, int m)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        k=*(p+n-1);
        for(j=n-1;j>0;j--)
            *(p+j)=*(p+j-1);
        *p=k;
    }
}
int main()
{
    int num,mm,arr[15],i;
    scanf("%d %d",&num,&mm);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    rotate(arr,num,mm);
    for(i=0;i<num;i++)
    {
        printf("%d",arr[i]);
        if(i<num-1)
            printf(" ");
    }

}

