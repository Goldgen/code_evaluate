#include<stdio.h>
void ch(int *ps,int m,int n)
{
    int i=0,e=0;
    int nums[12]={0};
    for(i=0;i<n;i++){
        nums[i] = *(ps+i);
    }
    for(i=0;i<m;i++){
        for(e=1;e<n;e++){
            *(ps+e) = nums[(e-1)%n];
        }
        *ps=nums[n-1];
        for(e=0;e<n;e++){
            nums[e] = *(ps+e);
        }
    }
}
int main()
{
    int i=0,n=0,m=0;
    int num[12]={0};
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    ch(num,m,n);
    for(i=0;i<n;i++){
        if(i==0)printf("%d",num[i]);
        else printf(" %d",num[i]);
    }
}
