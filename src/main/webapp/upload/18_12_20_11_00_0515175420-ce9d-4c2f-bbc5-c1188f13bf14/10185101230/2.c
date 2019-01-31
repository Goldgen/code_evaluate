#include <stdio.h>
#include <string.h>

int GetWords(char *sentence, char *words[]);
void SortStrings( char *strs[],int count);

int main()
{
char str[200][200];
char *words[200][200];
int i,j;
int n;
scanf("%d",&n);
n+=1;
int nWords[n];
for(i=0;i<n;i++)
gets(str[i]);
for(i=1;i<n;i++){
    for(j=0;j<n-1;j++)
        nWords[j]=GetWords(str[i],words[j]);
}
for(i=1;i<n;i++){
    for(j=0;j<n-1;j++)
        SortStrings(words[j],nWords[j]);
}
for(i=1;i<n;i++){
    for(j=0;j<n-1;j++)
        printf(words[i][j]);
}
return 0;
}
int GetWords(char *sentence,char *words[])
{
    int i=0;
    char *p;
    p=strtok(sentence," ,.");
    while(p!=NULL)
    {
        words[i]=p;
        i++;
        p=strtok(NULL," ,.");

    }

    return i;
}
void SortStrings(char *strs[],int count)
{
    char *p;
    int i,j,k;
    for(i=0;i<count;i++){
        for(j=i+1;j<count;j++)
        {
            if(strcmp(strs[i],strs[j])>0)
            {
                p=strs[i];
                strs[i]=strs[j];
                strs[j]=p;
            }
        }
    }
}
