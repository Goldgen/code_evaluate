#include <stdio.h>
#include <string.h>
#include <ctype.h>

int mMap[500];
char str[500];

int init(){

    mMap['a'] = mMap['b'] = mMap['c'] = 2;
    mMap['d'] = mMap['e'] = mMap['f'] = 3;
    mMap['g'] = mMap['h'] = mMap['i'] = 4;
    mMap['j'] = mMap['k'] = mMap['l'] = 5;
    mMap['m'] = mMap['n'] = mMap['o'] = 6;
    mMap['p'] = mMap['q'] = mMap['r'] = mMap['s'] = 7;
    mMap['t'] = mMap['u'] = mMap['v'] = 8;
    mMap['w'] = mMap['x'] = mMap['y'] = mMap['z'] = 9;


}

int main(){

    init();
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len && i < 8; i++)
        printf("%d", mMap[tolower(str[i])]);


    return 0;
}
