#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (void)
{
    int i = 0;
    char num[81] = "0";
    gets(num);
    num[8] = '\0';
    for(i=0;i<8;i++)
    {
        num[i] = tolower(num[i]);
        switch(num[i])
        {
    case('a'):case('b'):case('c'):
        num[i] = '2';
        break;
    case('d'):case('e'):case('f'):
        num[i] = '3';
        break;
    case('g'):case('h'):case('i'):
        num[i] = '4';
        break;
    case('j'):case('k'):case('l'):
        num[i] = '5';
        break;
    case('m'):case('n'):case('o'):
        num[i] = '6';
        break;
    case('p'):case('q'):case('r'):case('s'):
        num[i] = '7';
        break;
    case('t'):case('u'):case('v'):
        num[i] = '8';
        break;
    default:
        num[i] = '9';
        break;
        }
    }
    printf("%s",num);
}
