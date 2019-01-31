#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        switch(str[i]){
        case 'a':
        case 'b':
        case 'c':
            str[i]='2';
            break;
                case 'd':
        case 'e':
        case 'f':
            str[i]='3';
            break;
                    case 'g':
        case 'h':
        case 'i':
            str[i]='4';
            break;
                    case 'j':
        case 'k':
        case 'l':
            str[i]='5';
            break;
                    case 'm':
        case 'n':
        case 'o':
            str[i]='6';
            break;
                    case 'p':
        case 'q':
        case 'r':
            case 's':
            str[i]='7';
            break;
                    case 't':
        case 'u':
        case 'v':
            str[i]='8';
            break;
                    case 'w':
        case 'x':
        case 'y':
            case 'z':
            str[i]='9';
            break;
            default:
                break;
        }
    }
    printf("%s\n",str);
}
