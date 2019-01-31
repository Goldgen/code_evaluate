#include <stdio.h>
#include <string.h>
void rotate(int* p, int n, int m);

int main()
{
    int n,m,i;
    int numbers[15];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&numbers[i]);
    int *ptr;
    ptr=&numbers;
    rotate(ptr,n,m);
    for(i=0;i<n-1;i++)
        printf("%d ",*(ptr+i));
    printf("%d",*(ptr+i));
    return 0;
}
void rotate(int* p, int n, int m){
    int j;
    int *tp;
    int temp[15];
    tp=temp;
    for(j=0;j<m;j++)
        *(tp+j)=*(p+n-m+j);
    for(j=m;j<n;j++)
        *(tp+j)=*(p+j-m);
    for(j=0;j<n;j++)
        *(p+j)=*(tp+j);
}
