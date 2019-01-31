#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char letters[81] = {'\0'};
    gets(letters);
    int i;
    char numbers[9] = {'\0'};
    for (i=0; i<8; i++){
        switch(tolower(letters[i]))//????????
        {
          case 'a': case 'b': case 'c':
            numbers[i] = '2';
            break;
          case 'd': case 'e': case 'f':
            numbers[i] = '3';
            break;
          case 'g': case 'h': case 'i':
            numbers[i] = '4';
            break;
          case 'j': case 'k': case 'l':
            numbers[i] = '5';
            break;
          case 'm': case 'n': case 'o':
            numbers[i] = '6';
            break;
          case 'p': case 'q': case 'r': case 's':
            numbers[i] = '7';
            break;
          case 't': case 'u': case 'v':
            numbers[i] = '8';
            break;
          case 'w': case 'x': case 'y': case 'z':
            numbers[i] = '9';
            break;
          default: break;
        }
    }
    puts(numbers);
    return 0;
}
