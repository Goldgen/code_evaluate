#include <stdio.h>
#include <math.h>
int main()
{
   char a;
   scanf("%c",&a);
   switch(a)
{
case 'a':case 'e':case 'i':case 'o':case 'u':
    printf("vowel");
    break;
case 'b':case 'c':case 'd':case 'f':case 'g':case 'h':case 'j':case 'k':case 'l':case 'm':
    printf ("consonant");
    break;
case 'n':case 'p':case 'q':case 'r':case 's':case 't':case 'v':case 'w':case 'x':
    printf("consonant");
    break;
case 'y':case 'z':
    printf("consonant");
    break;
default:
    printf("ERROR");
    break;
}
    return 0;
}
