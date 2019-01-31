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
    int count,huihui,s[15],i;
    scanf("%d %d",& count,& huihui);
    for(i=0;i< count;i++)
    {
        scanf("%d",&s[i]);
    }
    rotate(s, count, huihui);
    for(i=0;i< count;i++)
    {
        printf("%d",s[i]);
        if(i< count -1)
            printf(" ");
    }
	return 0;
}
