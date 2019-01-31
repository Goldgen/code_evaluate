#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    for(int i = 0; i >= 0; ++i){
        int l1, l2, cnt=0, x=0, y, z;
        char str1[1001] = {'\0'}, str2[1001] = {'\0'};
        scanf("%s",str1);
        if(str1[0] == '#')
            break;
        scanf("%s",str2);
        l1 = strlen(str1);
        l2 = strlen(str2);
        for(; x < l1; ++x){
            y = 0;
            z = x;
            for(; y < l2; ++y){
                if(str1[z] == str2[y])
                    ++z;
                else
                    break;
                if(str2[y+1] == '\0'){
                    cnt++;
                    x = x + l2 - 1;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
