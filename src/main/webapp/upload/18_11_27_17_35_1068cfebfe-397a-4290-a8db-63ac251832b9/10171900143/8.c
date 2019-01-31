#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>


int main( ){
    int len;
    scanf("%d",&len);
    int a[len];
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    int max=1;
    int cnt=1;
    for (int i=1;i<len;i++){
        if(a[i]==a[i-1]){cnt++;
        if(max<cnt)max=cnt;
        }
        else {
            if(max<cnt)max=cnt;
            cnt=1;
        }
    }
    if (len==0)printf("0");
    else
    printf("%d",max);
	return 0;
}

