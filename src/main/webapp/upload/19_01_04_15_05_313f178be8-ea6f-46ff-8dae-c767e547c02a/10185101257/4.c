#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct
{
    char ch;
    int num;
} lib;
int main(){
    lib ans[101];
    char c, temp[101];
    int i = 0;
    while((c = getchar())!= EOF){
        if(c == '\n')
            break;
        temp[i] = c;
    }
    int cnt = 0;
    for(int j = 0;j <strlen(temp);++j){
        flag = 0;
        if(temp[j] == ' '||temp[j] = '\n')
            continue;
        for(int k = 0;k < cnt;++k){
            if(temp[j] == ans[k].ch)
                ans[k].num++;
            flag++;
        }
        if(flag == 0)
            ans[cnt].ch=temp[j];
    }
    return 0;
}
