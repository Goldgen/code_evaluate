#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int x=1;x<=t;x++){
	char str[210];
	int nwords=0;
	char *words[50];

	gets(str);
	nwords=Getwords(str,words);

sortstrings(words,nwords);
printf("case #%d:\n",x-1);
for(int i=0;i<nwords;i++){
        if(i<nwords-1)
    printf("%s ",words[i]);
else
    printf("%s",words[i]);
    }
    printf("\n");
    }
    return 0;
}
int Getwords(char *str,char *words[]){
int i,j,ln=strlen(str);

for(i=0;i<ln;i++){
    if(str[i]==' '){
    str[i]='\0';
    }
}
for(i=0;str[i]=='\0';i++);
for(j=0,words[j++]=str+i;i<ln;i++)
    if(str[i]=='\0')
    words[j++]=str+i+1;
return j;

}
void sortstrings(char *str[],int count){
int i,j,k;
char *p;
for(i=0;i<count-1;i++){
    for(j=i+1;j<count;j++)
    {
        if(strcmp(str[i],str[j])>0&&letter(str[i])==1&&letter(str[j])==1){
            p=str[i];
            str[i]=str[j];
            str[j]=p;
        }
    }
}
}
int letter(char str[]){
    int state=1;

    for(int j=0;str[j]!='\0';j++){
        if(!isalpha(str[j]))
        {
            state=0;
            break;
        }

}
return state;
}

