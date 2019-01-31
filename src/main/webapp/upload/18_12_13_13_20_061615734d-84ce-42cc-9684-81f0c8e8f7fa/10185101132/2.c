#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//********** Specification of strmcpy **********
char* strmcpy(char* t, char* s, int m);
/* PreCondition:
      t points to an array,
      s points to another array,
      m is less than length of string s
   PostCondition:
      copy s starting from m into t,
	  and return t
*/

int main()
{
    char src[81] = {0};
    char dest[162] = {0};
    gets(src);
    int m;
    scanf("%d", &m);
    printf("%s", strmcpy(dest, src, m));
    return 0;
}

char* strmcpy(char* t, char* s, int m){
    strcat(t, s + m);
    return t;
}
