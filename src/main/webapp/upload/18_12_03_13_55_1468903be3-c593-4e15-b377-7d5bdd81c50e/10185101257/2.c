#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    char string[40];
    char str[n+1][40];
    for(int i = 0; i < n+1; i++)
        gets(str[i]);
    int i,j;
    for(j=0;j<n;j++)
        for(i=0;i<n-j;i++){
            if(strcmp(str[i],str[i+1])<0){
                strcpy(string,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],string);
            }
        }
    for(int k = 0; k < n; ++k){
        printf("%s",str[k]);
        if(k < n-1)
            printf("\n");
    }
    return 0;
}
