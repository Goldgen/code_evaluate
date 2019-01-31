#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch,ch1;
    int i=0;
    while((ch = getchar())!=EOF)
    {
        ch1 = tolower(ch);
        if(i == 1)
            break;
        switch(ch1)
        {
          case 'a': case 'e': case 'i': case 'o': case 'u':
              i = 1;
              break;
          default:
              i = 2;
              break;
        }
    }
    if(i == 1)
        printf("yes");
    else
        printf("no");
    return 0;
}
