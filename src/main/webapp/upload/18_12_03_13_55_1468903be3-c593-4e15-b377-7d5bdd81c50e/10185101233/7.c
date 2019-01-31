#include"stdlib.h"
#include"string.h"
void LongestWord(const char str[],char result[])
{
    int i,flag=0,max=0,s;
    char *z=&result[0];
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            flag++;
            if(max<flag)
            {
                max=flag;
                s=i-max+1;
            }
        }
        else
            flag=0;
    }
    for(int i=0;i<max;i++)
        *(z+i)=str[i+s];
}
int main()
{
    int i;
    char str[80],result[80];
    scanf("%s",str);
    LongestWord(str,result);
    for(int i=0;i<strlen(result);i++)
        printf("%c",result[i]);
}