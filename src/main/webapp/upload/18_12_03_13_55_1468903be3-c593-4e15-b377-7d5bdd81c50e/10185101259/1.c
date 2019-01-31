#include <stdio.h>
#include <stdlib.h>

int main()
{   int arry[8],i;
    char message[80];
    fgets(message,9,stdin);
    for(i=0;i<8;i++){
    switch(message[i]){
    case 'a':case 'b':case 'c':arry[i]=2;break;
    case 'd':case 'e':case 'f':arry[i]=3;break;
    case 'g':case 'h':case 'i':arry[i]=4;break;
    case 'j':case 'k':case 'l':arry[i]=5;break;
    case 'm':case 'n':case 'o':arry[i]=6;break;
    case 'p':case 'q':case 'r':case 's':arry[i]=7;break;
    case 'v':case 't':case 'u':arry[i]=8;break;
    case 'z':case 'w':case 'x':case 'y':arry[i]=9;break;
    default:break;
    }
    }
    for(i=0;i<8;i++)
    printf("%d",arry[i]);
    return 0;
}
