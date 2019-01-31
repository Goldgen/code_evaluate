#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char s[11][33];
    scanf("%d\n", &n);
    for(int i=0; i<n; i++)
        gets(s[i]);
    for(int i=0; i<n; i++)
        for(int j=0; j<n-i-1; j++){
            if(s[j][0]<s[j+1][0]){
                char tmp[33];
                strcpy(tmp,s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], tmp);
            }
        }
    for(int i=0; i<n-1; i++)
        printf("%s\n", s[i]);
    printf("%s", s[n-1]);
    return 0;
}
