#include <stdio.h>
#include <string.h>
#include <ctype.h>
int tonumber(char x){
    x=tolower(x);
    int q=0;
    q=x-'a';
    if(q<15) return q/3+2;
    else if(q<19) return 7;
    else if(q<22) return 8;
    else return 9;
}
int main()
{
    char transtr[81];
    int i=0;
    scanf("%s",transtr);
    for(i=0;i<8;i++){
        printf("%d",tonumber(transtr[i]));
    }
    return 0;
}

