#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Sentence[80],Word[80];
    scanf("%s",Word);
    while(scanf("%s",Sentence)!=EOF)
	{
        if(strlen(Sentence)>strlen(Word)) strcpy(Word,Sentence);
    }
    printf("%s\n",Word);
    return 0;
}
