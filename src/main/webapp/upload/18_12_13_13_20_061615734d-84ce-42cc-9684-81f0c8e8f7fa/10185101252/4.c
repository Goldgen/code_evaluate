#include <stdio.h>
#include <string.h>

char* func(char* str){
    int len = strlen(str);
    for(int i = 0; i < len; i++)
        if(str[i] != 'z' && str[i] != 'Z')
            str[i]++;
        else
            str[i] -= 25;
    return str;
}

int main(){

    int T;
    char str[100][1005];
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
        scanf("%s", str[i]);
    for(int i = 0; i < T; i++)
        printf("case #%d: %s\n", i, func(str[i]));

    return 0;
}
