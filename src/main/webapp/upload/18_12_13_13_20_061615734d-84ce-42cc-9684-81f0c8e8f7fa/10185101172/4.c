#include <stdio.h>
#include <string.h>

int main() {
    int n=0;
    scanf("%d",&n);
    int i=0,j=0;
    char s[n][50];
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++)
    {
        printf("case #%d: ",i);
        for(j=0;j<strlen(s[i]);j++)
        {
            if(s[i][j]!='Z')
            s[i][j]+=1;
            else
                s[i][j]='A';
        }
        for(j=0;j<strlen(s[i]);j++)
            printf("%c",s[i][j]);
        if(i!=n-1)
        printf("\n");
    }
    return 0;
}
