#include <stdio.h>
#include <ctype.h>
#include <string.h>

int hex2int(char s[]);

int main()
{
    char s[10];
    
    scanf("%s", s);
  
    printf("%d", hex2int(s));
    
    return 0;
}

int hex2int(char s[])
{
    int num = 0;
    int count = 1;
    size_t len = strnlen(s, sizeof(s));
    
    for (size_t i = 0; i < len; i++) {
        
        for (unsigned int j = 0; j < (len - i - 1); j++) {
            count *= 16;
        }
        
        switch (tolower(s[i])) {
            case '0':
                num += 0 * count;
                break;
            case '1':
                num += 1 * count;
                break;
            case '2':
                num += 2 * count;
                break;
            case '3':
                num += 3 * count;
                break;
            case '4':
                num += 4 * count;
                break;
            case '5':
                num += 5 * count;
                break;
            case '6':
                num += 6 * count;
                break;
            case '7':
                num += 7 * count;
                break;
            case '8':
                num += 8 * count;
                break;
            case '9':
                num += 9 * count;
                break;
            case 'a':
                num += 10 * count;
                break;
            case 'b':
                num += 11 * count;
                break;
            case 'c':
                num += 12 * count;
                break;
            case 'd':
                num += 13 * count;
                break;
            case 'e':
                num += 14 * count;
                break;
            case 'f':
                num += 15 * count;
                break;
            default:
                break;
        }
    }
    
    return num;
}
