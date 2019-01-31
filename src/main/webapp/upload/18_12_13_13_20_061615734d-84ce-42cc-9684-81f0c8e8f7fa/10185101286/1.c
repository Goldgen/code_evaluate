#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    int i=0;
    while(src[i]!='\0'){
    dest[i]=src[i];
    ++i;
    }
}
int _strlen(const char* str) {
    int i=0;
    while(str[i]!='\0'){
    ++i;
    }
    return i;
}
int _strcmp(const char* lhs, const char* rhs) {
    int k=0;
    int i;
    for(i=0;i<100;++i){
    if(lhs[i]>rhs[i]){
    k=1;
    break;
    }
    else if(lhs[i]<rhs[i]){
    k=-1;
    break;
    }
    }
    return k;
}
char* _strcat(char* dest, const char* src) {
    int m=0;
    int n=0;
    int i;
    while(dest[m]!='\0'){
    ++m;
    }
    for(i=m;i<sizeof(dest)/sizeof(char);++i){
    if(src[n]=='\0'){
    break;
    }
    else{
    dest[m]=src[n];
    ++n;
    }
    }
}
char* _gets(char* str) {
    char a;
    int i=0;
    a=getchar();
    while(a!='\n'){
    str[i]=a;
    ++i;
    a=getchar();
    }
}
int main() {
    char a[201],b[101],cmd[7];
    while(1) {
        _gets(cmd);
        if(_strcmp(cmd, "GETS") == 0) {
            puts(_gets(a));
        } else if(_strcmp(cmd, "STRCPY") == 0) {
            int offset;
            scanf("%d",&offset);
            getchar();
            _gets(b);
            _strcpy(a + offset, b);
            puts(a);
        } else if(_strcmp(cmd, "STRLEN") == 0) {
            printf("%d\n",_strlen(a));
        } else if(_strcmp(cmd, "STRCMP") == 0) {
            _gets(b);
            int result = _strcmp(a, b);
            printf("%d\n", result > 0 ? 1 : (result < 0 ? -1 : 0));
        } else if(_strcmp(cmd, "STRCAT") == 0) {
            _gets(b);
            puts(_strcat(a, b));
        } else {
            break;
        }
    }
    return 0;
}