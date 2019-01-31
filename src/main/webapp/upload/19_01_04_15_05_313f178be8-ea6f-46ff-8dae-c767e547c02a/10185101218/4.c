#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct num num;
struct num{
    char w;
    int time;
};

int main()
{
    char str[105];
    num ch[105];
    int i,js3 = 0,js4 = 0;
    gets(str);
    for(i = 0;i < strlen(str);i++){
        if(str[i] == ' ') continue;
        int js1,js2 = 0;
        for(js1 = 0;js1 < i;js1++){
            if(str[i] == ch[js1].w){
                ch[js1].time++;
                js2++;
                break;
            }
        }
        if(js2 == 0){
            ch[js3].w = str[i];
            ch[js3].time = 1;
            js3++;
        }
    }
    for(;js4 < js3;js4++){
        printf("%c %d; ",ch[js4].w,ch[js4].time);
    }
    return 0;
}
