#include <stdio.h>
#include <assert.h>

char* _strcpy(char* dest, const char* src) {
    assert((dest!=NULL)&&(src!=NULL));   
    char *addres=dest;    
    while(*src!='\0'){
	   *dest++=*src++;    
	} 
    return addres; 
    // ????? strcpy
}
int _strlen(const char* str) {
	int i=0;
	while(str[i]!=EOF){
		i++;
	}
	return i;
   // ????? strlen
}
int _strcmp(const char* lhs, const char* rhs) {
	int ret = 0 ;
    while(!(ret=*lhs-*rhs)&&*rhs)
        ++lhs, ++rhs;
    return ret ; 
	}
   // ????? strcmp
char* _strcat(char* dest, const char* src) {
	char* p=dest;
	while(*p!='\0'){
		p++;
	}
	while(*src!='\0'){
		*p++=*src++;
	}
	return dest;
   // ????? strcat
}
char* _gets(char* str) {
	char* p=str;
	if(p=='\0'){
		scanf(" ");
	}
	else{
		scanf("%c",*p);
	}
   // ????? ???????????????????
   // ?????? EOF ???
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
