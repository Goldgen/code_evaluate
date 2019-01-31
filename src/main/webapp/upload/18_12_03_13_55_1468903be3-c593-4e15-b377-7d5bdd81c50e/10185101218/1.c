#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char data[8][5] = {
                          "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
                      };
    char str[81];
    scanf("%s",str);
    int js1,js2,js3;
    for(js2 = 0;js2 < 8;js2++){
        str[js2] = tolower(str[js2]);
    }
    for(js3 = 0;js3 < 8;js3++){
        for(js1 = 0;js1 < 8;js1++){
            if(strchr(data[js1],str[js3])){
                    printf("%d",js1+2);
                    break;
            }
        }
    }
    return 0;
}
