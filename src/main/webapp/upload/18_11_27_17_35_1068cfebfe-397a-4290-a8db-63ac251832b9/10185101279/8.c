#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int data[n];
    int c[n-1];
    for(int i=0;i<n;i++)
        scanf("%d",&data[i]);
    for(int i=0;i<n-1;i++)
        c[i]=1;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(data[j]==data[j+1])
                c[i]++;
            else
                break;
        }
    }
    int maximum=c[0];
    for(int i=1;i<n-1;i++){
        if(c[i]>maximum)
            maximum=c[i];
    }
    printf("%d",maximum);
	return 0;
}
