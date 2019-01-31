#include <stdio.h>
#include <math.h>
int main(){
    int n,cnt=1,max=1;
    scanf("%d",&n);
    int data[n];
    for(int i=0;i<n;++i){
        scanf("%d",&data[i]);
        if(i>0){
            if(data[i]==data[i-1])
                ++cnt;
            else
                cnt=1;
        }
        if(cnt>max)
            max=cnt;
    }
    printf("%d",max);
    return 0;
}
