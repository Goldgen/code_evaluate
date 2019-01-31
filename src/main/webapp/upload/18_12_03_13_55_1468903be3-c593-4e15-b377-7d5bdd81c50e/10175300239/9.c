#include <stdio.h>
#include <string.h>

int main()
{
    char str[85],findStr[85];
    gets(str);
    scanf("%s",findStr);
    int count=0;
    int first,i,j,exist;
    for(i=0;i<strlen(str)-strlen(findStr)+1;i++){
        exist=0;
        for(j=0;j<strlen(findStr);j++){
            if(findStr[j]!=str[i+j]){
                exist=0;
                break;
            }
            exist=1;
        }
        if(exist==1){
            count++;
            if(count==1)
                first=i;
        }
    }
    if(count==0)
        first=-1;
    printf("%s: %d time(s), first at %d",findStr,count,first);
    return 0;
}
