#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <string.h>



int main()
{
    int n;
    scanf("%d",&n);
    char s[20][10000];
    char *a="{}";
    strcpy(s[0],a);int j,k,len;
    for(int i=1;i<=n;i++){
            len=strlen(s[i-1]);

        for(j=0;j<len;j++){
                if(s[i-1][j]=='\0')break;
            s[i][j]=s[i-1][j];
        }

        for(k=0;k<len;k++){
                if(s[i-1][k]=='}'){
                    if(k>2){
                            s[i][j+k]=',';j++;
                    }
                    s[i][j+k]=i-1+48;j++;
                }
            s[i][j+k]=s[i-1][k];
        }

    }
    for(int i=0;i<strlen(s[n]);i++){
    if(s[n][i]=='{'&& i>1)printf("\n");
    printf("%c",s[n][i]);
}



    return 0;
}


