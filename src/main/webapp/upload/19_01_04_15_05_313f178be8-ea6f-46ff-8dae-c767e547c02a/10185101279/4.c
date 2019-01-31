#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char ch;
    int number;
}letter;
int find(letter word[],int n,char c);
int main(){
int i;
int count=0;
char str[110];
letter word[110];
gets(str);
word[0].ch=str[0];
word[0].number=1;
count++;
for(i=1;i<strlen(str);i++){
    int x=find(word,count,str[i]);
    if(x!=0&&str[i]!=' '){
        word[x].number++;
    }
     if(x==0&&str[i]!=' ')
    {
        word[count].ch=str[i];
        word[count].number=1;
        count++;
    }
}
for(i=0;i<count;i++){
    printf("%c %d; ",word[i].ch,word[i].number);
}

return 0;

}
int find(letter word[],int n,char c){
int i;
for(i=0;i<n;i++)
{
    if(word[i].ch==c)
    {
        return i;
    }
}
return 0;

}
