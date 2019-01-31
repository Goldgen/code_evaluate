#include <stdio.h>
#include <string.h>

void LongestWord(char str[], char result[]){
    int count=0,i=0,max=0;
    char container[81];
    for(i=0;i<=strlen(str);i++){
        if((str[i]!=' ')){
            container[count]=str[i];
        }
        if(count>max){
            max=count;
            strcpy(result,container);
        }
        count++;
        if(str[i]==' '){
            count=0;
        }
    }
    printf("%s\n",result);
}
int main()
{
    char str[81],result[81];
    gets(str);
    LongestWord(str,result);
    return 0;
}
