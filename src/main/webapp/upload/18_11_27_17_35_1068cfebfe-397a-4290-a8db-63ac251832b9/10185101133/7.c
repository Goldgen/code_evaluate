#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
	int num[100]={0};
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int m,count=0;
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(num[i]==m){
            num[count]=i;
            count++;
        }
    }
    if(!count){
        printf("ERROR");
        return 0;}
    for(i=0;i<count;i++){
        printf("%d",num[i]);
        if(i!=count-1)
            printf(" ");
    }
    return 0;
}