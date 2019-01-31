#include <stdio.h>
int main(void)
{
    int n=0,i=1,find=0,delete_num=0,x=0,count=0;
    scanf("%d\n",&n);    //scan the array
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&delete_num);    // check if it is error
    for(x=0;x<n;x++){
        if(a[x]==delete_num) {
            if(count==0) printf("%d",x);
            else printf(" %d",x);
            count++;
            find=1;
        }
    }
    if(find==0) printf("ERROR");
    return 0;
}



