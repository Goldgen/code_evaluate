#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    if(scanf("%d\n",&n)&&n>=1&&n<=10){
    char in[n][30];
    int s[n];
    int i=0,e=0,tmp;
    for(e=0;e<n;e++){
        fgets(in[e],30,stdin);
    }
    for(i=0;i<n;i++)s[i]=i;
    for(i=0;i<n;i++)
    for(e=0;e<n-i-1;e++){
        if(strcmp(in[s[e+1]],in[s[e]])>0){
            tmp=s[e];
            s[e]=s[e+1];
            s[e+1]=tmp;
        }
    }
    for(i=0;i<n;i++){
        printf("%s",in[s[i]]);
    }
    }
    return 0;
}
