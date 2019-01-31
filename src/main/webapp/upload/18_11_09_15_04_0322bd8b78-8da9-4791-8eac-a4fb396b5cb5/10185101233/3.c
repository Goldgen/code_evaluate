#include<stdio.h>
int main()
{

    string x;
    getchar("%s",&x);
    switch(x)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
        printf("yes");
        break;
    default:
        printf("no");
        break;
        
    }
    return 0;
}
