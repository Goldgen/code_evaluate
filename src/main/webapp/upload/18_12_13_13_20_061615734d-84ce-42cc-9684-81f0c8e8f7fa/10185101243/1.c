#include <stdio.h>



   char* _strcpy(char* dest, const char* src) {
    while(*src!='\0')
    {
      *dest=*src;
      dest++;
      src++;
    }
    *dest='\0';
}
int _strlen(const char* str) {
   int len=0;
   for (; *str!='\0'; str++)
	{
		len++;
	}
	return (len);

}
int _strcmp(const char* lhs, const char* rhs) {
  int ret=0;
	while(!(ret=*(unsigned char*)lhs-*(unsigned char*)rhs)&&*lhs)
	{
		lhs++;
		rhs++;
	}
	if(ret<0){
		return -1;}
	else if(ret>0){
		return 1;}
		return 0;

   // ????? strcmp
}
char* _strcat(char* dest,  const char* src) {
   char *tmp=dest;
    while (*tmp)
        tmp++;
    while (*tmp++ =*src++) ;
    return dest;
   // ????? strcat
}
char* _gets(char* str) {
   char c;
	int cnt=0;
	while((c=getchar())!='\n'){
		str[cnt++]=c;
	}
	str[cnt]='\0';
	return str;

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
