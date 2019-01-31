#include<string.h>
#include <stdio.h>
char* _strcpy(char dest[], const char src[]) {
    int i = 0;
    for(i = 0; src[i] != '\0'; i ++)
    	dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
int _strlen(const char str[]) {
	int j = 0;
	while(str[j] != '\0')
		j++;
	return j;
}
int _strcmp( const char *lhs, const char* rhs) {
  	while((*lhs != '\0') && (*lhs == *rhs))
  	{
  		lhs++;
		rhs++;  	
	}
	int k ;
	k = *lhs - *rhs;
  	if(k == 0)
  		return 0;
  	else if(k > 0)
  		return 1;	
}
char* _strcat(char dest[], const char src[]) {
  	int l = 0,m = 0;
  	while(dest[l] != '\0')
  		l ++;
  	while(src[m] != '\0')
  		{
  			dest[l] = src[m];
  			l++;
  			m++;
	 	}
	dest[l] = '\0';
	return dest;
}
char* _gets(char str[]) {
   char c;
   int h = 0;
   while((c = getchar()) != '\n')
   	{
   		str[h] = c;
   		h ++;
	}
	str[h] = '\0';
	return str;
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