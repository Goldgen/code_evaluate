#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i,j,count,exsist;
    count=0;
    char str[101];
    char a[100];
    int b[100];
    for(i=0;i<100;i++)
        b[i]=1;
    gets(str);
    for(i=0;i<strlen(str);i++){
        if(isgraph(str[i])){
            exsist=0;
            for(j=0;j<count;j++){
                if(a[j]==str[i]){
                    b[j]++;
                    exsist=1;
                    break;
                }
            }
            if(exsist==0){
                a[count]=str[i];
                count++;
            }
        }
    }
    for(i=0;i<count;i++)
        printf("%c %d; ",a[i],b[i]);
    return 0;
}
