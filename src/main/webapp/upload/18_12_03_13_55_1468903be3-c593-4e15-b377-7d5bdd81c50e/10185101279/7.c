#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void Longestword(char str[]);
int main()
{char s[100];
gets(s);
Longestword(s);


	return 0;
}
void Longestword(char str[]){
char str1[100][100];
char temp[100];
int state=0;
int k=0;
int j=0;
for(int i=0;i<strlen(str);i++){
    if(isalpha(str[i])){
        str1[j][k]=str[i];
        k++;
        state=1;
    }
    else
    {
        if(state==1)j++;
        state=0;
        k=0;
    }
}
strcpy(temp,str1[0]);
for(int i=1;i<=j;i++){
    if(strlen(str1[i])>strlen(temp))
        strcpy(temp,str1[i]);
}
puts(temp);
}
