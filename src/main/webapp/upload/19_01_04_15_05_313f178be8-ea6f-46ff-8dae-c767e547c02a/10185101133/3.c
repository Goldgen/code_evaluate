#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int main()
{
    char A[1001];
    char B[1001];
    while(scanf("%s",A)!=EOF){
        if(strcmp(A,"#")==0)
            break;
        scanf("%s",B);
        int i=0,j=0,count=0;
        while(i<strlen(A)){
            int flag=1;
            for(j=0;j<strlen(B);j++){
                if(A[i+j]!=B[j]){
                    flag=0;
                    break;
                }
            }
            if(flag==1 && i+strlen(B)<=strlen(A)){
                count++;
                i+=strlen(B);
            }
            else
                i++;
        }
        printf("%d\n",count);
    }
    return 0;
}
