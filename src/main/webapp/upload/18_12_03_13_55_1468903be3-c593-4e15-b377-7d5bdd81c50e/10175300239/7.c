#include <stdio.h>
#include <string.h>
void LongestWord(const char str[], char result[]);
int main()
{
    char s[85];
    char output[85]={0};
    gets(s);
    LongestWord(s,output);
    printf("%s\n",output);
    return 0;
}
void LongestWord(const char str[], char result[]){

    int i,j,k,lenMax,len;
    int lengths[85]={0};
    int begin[85];
    lenMax=0;
    len=0;
    j=0;
    begin[0]=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]!=' '){
            len++;
            continue;
        }

        lengths[j]=len;
        j++;
        begin[j]=begin[j-1]+len+1;
        len=0;

    }
    lengths[j]=len;
    for(i=0;i<=j;i++){
        if(lenMax<lengths[i])
            lenMax=lengths[i];
    }
    for(i=0;i<=j;i++){
        if(lenMax==lengths[i]){
            for(k=0;k<lenMax;k++)
                result[k]=str[begin[i]+k];
            break;
        }
    }
}