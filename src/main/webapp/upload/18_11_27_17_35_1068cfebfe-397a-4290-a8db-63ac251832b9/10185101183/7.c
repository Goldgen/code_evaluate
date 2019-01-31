#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;scanf("%d",&n);
    int a[n];
    int b[n];int m=1;
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    int p,q=0;
    scanf("%d",&p);
    for(int i=0;i<n;++i)
    {
        if(a[i]==p)
        {
            b[q]=i;
            ++q;
            m=0;
        }
    }
    if(m)
    {
        printf("ERROR");
        return 0;
    }
    for(int i=0;i<q-1;++i)
    {
            printf("%d ",b[i]);

    }
	printf("%d",b[q-1]);
}
