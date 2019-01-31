#include <stdio.h>

void index(int array[],int indexArray[],int len,int findX);
int main()
{
    int n,i,x;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    index(a,b,n,x);
    return 0;
}
void index(int array[],int indexArray[],int len,int findX){
    int countX=0;
    int j;
    for(j=0;j<len;j++){
        if(array[j]==findX){
            indexArray[countX]=j;
            countX++;
        }
    }
    if(countX==0)
        printf("ERROR");
    else{
        for(j=0;j<countX-1;j++)
            printf("%d ",indexArray[j]);
        printf("%d",indexArray[j]);
    }
    return;
}
