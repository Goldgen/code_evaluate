#include <stdio.h>
#include <stdlib.h>
void reverse(char ch)
{
    scanf("%c",&ch);
    if(ch=='?')
    return;
   reverse(ch);
        printf("%c",ch);

}
int main()
{
   char str='\0';
   reverse(str);
    return 0;
}
