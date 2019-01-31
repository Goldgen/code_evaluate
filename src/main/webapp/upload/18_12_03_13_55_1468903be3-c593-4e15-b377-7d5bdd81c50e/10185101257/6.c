#include <stdio.h>
#include <string.h>
long long hex2int(char data[]){
    long long len, cnt, ans=0;
    len = strlen(data);
    for(int i = 0; i < len; ++i){
        switch(data[i]){
            case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
                cnt = data[i] - '0';
                break;
            case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
                cnt = data[i] - 'a' + 10;
                break;
            case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
                cnt = data[i] - 'A' + 10;
                break;
            default:
                break;
        }
        ans = cnt + ans * 16;
    }
    return ans;
}
int main(){
    char data[10]={'\0'};
    scanf("%s",data);
    printf("%lld", hex2int(data));
    return 0;
}
