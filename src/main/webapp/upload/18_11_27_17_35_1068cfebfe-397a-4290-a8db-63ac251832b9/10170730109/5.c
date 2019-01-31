#include <stdio.h>

int main(void)
{
    int n=0,i=1,insert_no=0,insert_num=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&insert_no,&insert_num);
    for(i=0;i<n-1;i++){
        if(i!=insert_no){
            printf("%d ",a[i]);
        }
        else
            printf("%d %d ",insert_num,a[i]);
    }
    if(i==insert_no-1){
        printf("%d %d",a[i],insert_num);
    }
    else if(i==insert_no){
        printf("%d %d",insert_num,a[i]);
    }
    else
        printf("%d",a[i]);
    return 0;
}

