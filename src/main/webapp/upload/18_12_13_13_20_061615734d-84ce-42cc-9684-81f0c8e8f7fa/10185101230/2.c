#include <stdio.h>
char* _strmcpy(char* t, char* s, int m) {
int i=0;
for(i=0;i<85;i++){
    t[i]=s[m+i];
}
printf("%s",t);
}
int main() {
    char shuzu[85];
    char copy[85];
    int n;
    gets(shuzu);
    scanf("%d",&n);
    _strmcpy(copy ,shuzu ,n);
    return 0;
}
