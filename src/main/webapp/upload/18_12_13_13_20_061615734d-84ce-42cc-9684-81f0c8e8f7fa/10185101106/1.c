#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    for(int n = 0;n < 100;n++)
    {
    	*(dest+n )= *(src+n);
	}
	return dest;
}
int _strlen(const char* str) {
   int n = 0;
   int i = 0;
   while(*(str+i) != '\0')
   {
   	n++;
   	i++;
   }
   return n;
}
int _strcmp(const char* lhs, const char* rhs) {
   int i = 0;
   while(*(lhs+i) != '\0'&&*(rhs+i )!= '\0')
   {
   	++i;
   }
   if(*(lhs+i) != '\0'&&*(rhs+i ) == '\0')
   {
   	return 1;
   }
   else if (*(lhs+i) == '\0'&&*(rhs+i ) == '\0')
   {
   	return 0;
   }
   return -1;
}
char* _strcat(char* dest, const char* src) {
   int i = 0,j = 0;
   while(*(dest+i )!= '\0')
   {
   	i++;
   }
   for(j = 0;j < 100;j++)
   {
   	*(dest+i) = *(src+j);
   }
   return dest;
}
char* _gets(char* str) {
	for(int n = 0;n < 100; n++)
	{
		scanf("%c",str+n);
		if(str+n == "\n")
		break;
	}
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