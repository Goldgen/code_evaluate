#include <stdio.h>
void string ()
{
    char c;
    scanf("%c",&c);
    if(c!='?')
    {
    string();
    printf("%c",c);
    }
}
int main(){
    string();
    return 0;
}