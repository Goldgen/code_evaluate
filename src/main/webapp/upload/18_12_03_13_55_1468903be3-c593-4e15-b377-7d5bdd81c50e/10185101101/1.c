#include <stdio.h>
#include <stdlib.h>
int convert(char letter)
{
    if(letter>=97&&letter<=99)
        return 2;
    else if(letter>=100&&letter<=102)
        return 3;
    else if(letter>=103&&letter<=105)
        return 4;
    else if(letter>=106&&letter<=108)
        return 5;
    else if(letter>=109&&letter<=111)
        return 6;
    else if(letter>=112&&letter<=115)
        return 7;
    else if(letter>=116&&letter<=118)
        return 8;
    else if(letter>=119&&letter<=122)
        return 9;
    else
        return;

}
int main()
{
    int number[3][3];
    char string[80];
    scanf("%s",string);
    int i=0;
    for(i=0;i<8;++i){
        printf("%d",convert(string[i]));
    }
    return 0;
}