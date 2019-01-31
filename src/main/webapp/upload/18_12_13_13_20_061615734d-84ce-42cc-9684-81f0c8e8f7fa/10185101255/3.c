#include <stdio.h>
#include <string.h>

char* i2a(char* p, int n);

int main() {
    int num = 0;
    char str[15];
    char temp[15];
    unsigned long len = 0;
    
    scanf("%d", &num);
    
    i2a(str, num);
    
    len = strlen(str);
    strcpy(temp, str);
    for (unsigned int i = 0; i < len; i++) {
        str[i] = temp[len-i-1];
    }
    printf("%s", str);
    return 0;
}
char* i2a(char* p, int n) {
    if (n == 0)
    {
        *p = '\0';
        
        return p;
    }
    else
    {
        i2a(p + 1, n / 10);
        switch (n % 10) {
            case 1:
                *p = '1';
                break;
            case 2:
                *p = '2';
                break;
            case 3:
                *p = '3';
                break;
            case 4:
                *p = '4';
                break;
            case 5:
                *p = '5';
                break;
            case 6:
                *p = '6';
                break;
            case 7:
                *p = '7';
                break;
            case 8:
                *p = '8';
                break;
            case 9:
                *p = '9';
                break;
            case 0:
                *p = '0';
                break;
                
            default:
                break;
        }
        
        return p;
       
    }
}

