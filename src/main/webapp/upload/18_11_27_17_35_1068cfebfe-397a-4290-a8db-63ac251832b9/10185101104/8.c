#include <stdio.h>
int main()
{
    int n,i,max=0,length=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
        if(a[i]==a[i-1])
            length++;
        else
        {
            max=max>length?max:length;
            length=1;
        }
    max=max>length?max:length;
    printf("%d",max);
    return 0;
}
