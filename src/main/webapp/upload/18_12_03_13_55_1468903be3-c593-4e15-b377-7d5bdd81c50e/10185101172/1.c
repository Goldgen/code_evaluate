#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Reflect(char n);

int main()
{
    int i=0;
   char data[80];
   scanf("%s",data);
   for(i=0;i<8;i++)
    Reflect(data[i]);
  return 0;
}

int Reflect(char n)
{
    tolower(n);
    switch(n)
    {
    case 'a':case 'b':case 'c':
        printf("2");
        break;
    case 'd':case 'e':case 'f':
        printf("3");
        break;
    case 'g':case 'h':case 'i':
        printf("4");
        break;
    case 'j':case 'k':case 'l':
        printf("5");
        break;
    case 'm':case 'n':case 'o':
        printf("6");
        break;
    case 'p':case 'q':case 'r':case 's':
        printf("7");
        break;
    case 't':case 'u':case 'v':
        printf("8");
        break;
		default:
        printf("9");
        break;
            }
}
