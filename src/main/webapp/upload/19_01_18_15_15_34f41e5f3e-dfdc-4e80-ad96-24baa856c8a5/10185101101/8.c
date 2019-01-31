#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[100];
    int i,j,k,m=0;
    scanf("%s %d",num,&i);
    j=strlen(num);
    k=i%j;
    printf("%d ",j);
    for(m=0;m<k;++m)
        printf("%c",num[j-k+m]);
    for(m=k;m<j;++m)
        printf("%c",num[m-k]);
    return 0;
}
