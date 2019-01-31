#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int hex2int(char hex[]);

int main()
{
    char srcHex[10];
    scanf("%s", srcHex);
    printf("%lld", hex2int(srcHex));
    return 0;
}

int hex2int(char hex[]){
    int hexLen = strlen(hex);
    long long dec = 0;

    int i;
    for(i = 0; i < hexLen; i++){
        hex[i] = toupper(hex[i]);
        switch(hex[i]){
        case 'F':
            dec++;
        case 'E':
            dec++;
        case 'D':
            dec++;
        case 'C':
            dec++;
        case 'B':
            dec++;
        case 'A':
            dec++;
        case '9':
            dec++;
        case '8':
            dec++;
        case '7':
            dec++;
        case '6':
            dec++;
        case '5':
            dec++;
        case '4':
            dec++;
        case '3':
            dec++;
        case '2':
            dec++;
        case '1':
            dec++;
        default://case '0':
            break;
        }
        dec *= 16;
    }
    return (dec / 16);
}
