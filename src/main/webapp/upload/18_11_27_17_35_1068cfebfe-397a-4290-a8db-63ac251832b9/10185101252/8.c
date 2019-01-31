#include <stdio.h>
#include <string.h>
int n;
int array[10000];
int dp[10000];
int main(){

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        dp[i] = 1;
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    for(int i = 1; i < n; i++){
        if(array[i] == array[i-1] && dp[i] < dp[i-1] + 1)
            dp[i] = dp[i-1] + 1;
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        if(dp[i] > max)
            max = dp[i];
    }
    printf("%d", max);

    return 0;
}
