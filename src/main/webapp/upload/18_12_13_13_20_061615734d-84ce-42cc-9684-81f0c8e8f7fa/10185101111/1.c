void* _strcpy(char* dest, const char* src){
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}
int _strlen(const char* str){
    int sum=0;
    while(*str!='\0'){
        str++;
        sum++;
    }
    return sum;
}
int _strcmp(const char* lhs, const char* rhs){
    if(_strlen(lhs)>=_strlen(rhs)){
    while(*lhs!='\0'){
        if(*lhs>*rhs)
            return 1;
        else if(*lhs<*rhs)
            return -1;
        lhs++;
        rhs++;
    }
    }
    else if(_strlen(lhs)<_strlen(rhs)){
        while(*rhs!='\0'){
        if(*lhs>*rhs)
            return 1;
        else if(*lhs<*rhs)
            return -1;
        lhs++;
        rhs++;
    }
    return 0;
}
}
char* _strcat(char* dest, const char* src){
    int m=0;
    int t=_strlen(dest);
    while(*src!='\0'){
        *(dest+t+m)=*src;
        src++;
        m++;
    }
    *(dest+t+m)='\0';
    return dest;
}
char* _gets(char* str){
    int m=0;
    do{
        *str=getchar();
        str++;
        m++;
    }while(*(str-1)!='\n');
    *(str-1)='\0';
    return str-m;
}
int main()
{
    char a[201],b[101],cmd[7];
    while(1) {
        _gets(cmd);
        if(_strcmp(cmd,"GETS")==0) {
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