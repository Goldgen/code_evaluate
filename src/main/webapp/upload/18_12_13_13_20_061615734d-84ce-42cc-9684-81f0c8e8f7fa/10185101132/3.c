#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//********** Specification of i2a **********
char* i2a(char* p,int n);
/* PreCondition:
     n is a non-negative integer,
     p is a pointer to a buffer
   PostCondition:
     put string representation of n in a buffer pointed by p?
     and return p
Retrn char*: return the first address of buffer p.
*/

int main()
{
    int k;
    scanf("%d", &k);

    char str[16] = {0};
    i2a(str, k);
    convertStr(str);
    printf("%s", str);

    return 0;
}

char* i2a(char* p,int n){
    const int diff = '0';
    int m = n;

    if(m){
        i2a(p + 1, m / 10);
        *p = (m % 10) + diff;
    }else{
        *p = 0;
    }

    return p;
}

void convertStr(char src[]){
    int srcLen = strlen(src);
    char temp[16] = {0};

    int i;
    for(i = 0; i < srcLen; i++){
        temp[srcLen - 1 - i] = src[i];
    }

    strcpy(src, temp);
}
