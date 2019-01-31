#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*（选择）输入一个英文单词（只包含大写字母和小写字母），
如果这个英文单词包含元音字母（a，e，i，o，u）可以为大写，
就输出‘yes’，否则就输出‘no’。

样例输入1：
HELLO
样例输出1：
yes
样例输入2：
Why
样例输出2：
no*/

int mmm(char* word, int len){
    for(int i=0; i<len; i++)
        switch(word[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': return 1;
        }
    
    return 0;
}

int main()
{
    char word[111];
    scanf("%s", word);
    int len, res;
    len = strlen(word);
    res = mmm(word, len);
    if(res==1) printf("yes");
    else printf("no");
    return 0;
}
