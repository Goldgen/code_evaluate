#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Func(char* str, char* s);
int main()
{
    char str[1050] = {'\0'}, s[1001] = {'\0'};
    scanf("%s", str);

    while (str[0]!='#')
    {
        int len = strlen(str), l = strlen(s), u;
        for (u=0; u<len; u++){
            if (str[u]=='#')
                return 0;
        }
        scanf("%s", s);
        for (u=0; u<l; u++){
            if (s[u]=='#')
                return 0;
        }

        printf("%d\n",Func(str, s));



        scanf("%s", str);
    }
    return 0;
}

int Func(char* str, char* s)
{
    int i, j, flag,
         len=strlen(str), l=strlen(s), count=0;
    for (i=0; i<=len; i+=l){

            if (str[i]==s[0]){
                flag = 1;
                for (j=1; j<l; j++){
                    if (str[i+j]!=s[j]){
                        flag = 0;
                        break;
                    }
                }
                if (flag==1) count++;
            }

    }

    return count;
}
