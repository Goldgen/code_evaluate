#include <stdio.h>
int main(void)
{
    int n=0,i=0,platform=1,max_platform=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i>0&&a[i]==a[i-1]){
            platform++;
            max_platform=platform>max_platform?platform:max_platform;
        }
        else platform=1;
    }
    printf("%d",max_platform);
    return 0;
}