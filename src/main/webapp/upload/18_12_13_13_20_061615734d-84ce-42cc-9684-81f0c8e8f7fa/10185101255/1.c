#include <stdio.h>

char* _strcpy(char* dest, const char* src) {
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return dest;
}
int _strlen(const char* str) {
    int count = 0;
    while(*(str+count)!='\0') count++;
    return count;
}
int _strcmp(const char* lhs, const char* rhs)
{
    if (_strlen(lhs) < _strlen(rhs))
    {
        while (*lhs != '\0')
        {
            if ((*lhs - *rhs) > 0)
            {
                return 1;
            }
            else if((*lhs - *rhs) < 0)
            {
                return -1;
            }
            lhs++;
            rhs++;
        }
    
    return -1;
    }
    else if (_strlen(lhs) == _strlen(rhs))
    {
        while (*lhs != '\0')
        {
            if ((*lhs - *rhs) > 0)
            {
                return 1;
            }
            else if((*lhs - *rhs) < 0)
            {
                return -1;
            }
            lhs++;
            rhs++;
        }
        
        return 0;
    }
    else
    {
        while (*lhs != '\0')
        {
            if ((*lhs - *rhs) > 0)
            {
                return 1;
            }
            else if((*lhs - *rhs) < 0)
            {
                return -1;
            }
            lhs++;
            rhs++;
        }
        
        return 1;
    }
}
char* _strcat(char* dest, const char* src) {
    int len1 = 0;
    int len2 = 0;
    len1 = _strlen(dest);
    len2 = _strlen(src);
    char *p = dest+len1;
    for (unsigned int i = 0; i < len2; i++) {
        *p = *src;
        p++;
        src++;
    }
    return dest;
}
char* _gets(char* str) {
    char c = '0';
    while ((c = getchar())!= '\n') {
        *str = c;
        str++;
    }
    *str = '\0';
    return str;
}
int main() {
    char a[201],b[101],cmd[7];
    while(1) {
        _gets(cmd);
        if(_strcmp(cmd, "GETS") == 0) {
            _gets(a);
            puts(a);
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
            puts(_strcat(a,b));
        } else {
            break;
        }
    }
    return 0;
}
