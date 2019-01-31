#include <stdio.h>
#include <string.h>

#define gc getchar()
char* _strcpy(char* dest, const char* src) {
	int cnt = 0;
	while(dest[cnt] = src[cnt]) {
		++cnt;
	}
	return dest;
}
int _strlen(const char* str) {
	int cnt = 0;
	while(str[cnt]) {
		++cnt;
	}
	return cnt;
}
int _strcmp(const char* lhs, const char* rhs) {
	int llen = _strlen(lhs);
	int rlen = _strlen(rhs);
	int len = llen > rlen ? rlen : llen;
	for(register int i = 0;i < len;++i) {
		if(lhs[i] < rhs[i]) {
			return -1;
		} else if(lhs[i] > rhs[i]) {
			return 1;
		}
	}
	if(llen < rlen) {
		return -1;
	} else if(llen > rlen) {
		return 1;
	}
	return 0;
}
char* _strcat(char* dest, const char* src) {
	int st = _strlen(dest);
	_strcpy(dest + st, src);
	return dest;
}
char* _gets(char* str) {
	char c;
	int cnt = 0;
	while((c = gc) != '\n') {
		str[cnt++] = c;
	}
	str[cnt] = '\0';
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