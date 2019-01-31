#include <stdio.h>
int main(void)
{
    int n=0,i=1,find=0,delete_num=0,x=0;
    scanf("%d\n",&n);    //scan the array
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&delete_num);    // check if it is error
    for(x=0;x<n;x++){
        if(a[x]==delete_num) {
            find=1;
            break;
        }
    }
    if(find==0) printf("ERROR");
    else{     // acheive the deleting process
        i=1;
        if(x!=0) printf("%d",a[0]);
        else{
            i=2;
            find=2;
            printf("%d",a[1]);
        }
        for(;i<n;i++){
            if((i==x)&&(find==1)){
                find=2;
            }
            else printf(" %d",a[i]);
        }
    }
    return 0;
}


