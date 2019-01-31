#include"stdio.h"
#include"stdlib.h"
#include"string.h"
char change(char a)
{
    if ((a>='a' && a<='c' ) || (a>='A' && a<='C'))return '2';
    if ((a>='d' && a<='f' ) || (a>='D' && a<='F'))return '3';
    if ((a>='g' && a<='i' ) || (a>='G' && a<='I'))return '4';
    if ((a>='j' && a<='l' ) || (a>='J' && a<='L'))return '5';
    if ((a>='m' && a<='o' ) || (a>='M' && a<='O'))return '6';
    if ((a>='p' && a<='s' ) || (a>='P' && a<='S'))return '7';
    if ((a>='t' && a<='v' ) || (a>='T' && a<='V'))return '8';
    if ((a>='w' && a<='z' ) || (a>='W' && a<='Z'))return '9';
}
int main()
{
    char letters[85];
    char *pletters=&letters[0];
    int i;
    scanf("%s",&letters);
    for(i=0;i<strlen(letters);i++)
    {
        printf("%c",change(*(pletters+i)));
    }
}