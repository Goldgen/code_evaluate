#include <stdio.h>
#include <string.h>
int getword(char str[],char word[][222])
{
    int len=strlen(str),num=0,a[222]={0};
    char *pstr=str;
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            str[i]='\0';
            a[num]=i;
            num++;
        }
    }
    strcpy(word[0],pstr);
    for(int i=1;i<num+1;i++)
    {
        strcpy(word[i],pstr+a[i-1]+1);
    }
    return num+1;
}
void check(char word[][222],int arry[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;word[i][j]!='\0';j++)
        {
            if(word[i][j]>='A'&&word[i][j]<='Z')
                arry[i]=1;
            else
			{
                arry[i]=0;
				break;
			}
        }
    }
    return;
}
void SORT(char word[][222],int arry[],int n)
{
    char temp[222];
    for(int i=0;i<n-1;i++)
    {
        if(!arry[i])
            continue;
        for(int j=1+i;j<n;j++)
        {
            if(!arry[j])
                continue;
            if(strcmp(word[i],word[j])>0)
            {
                strcpy(temp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        char str[222];
        gets(str);
        char word[222][222];
        int n=getword(str,word);
        int arry[n];
        check(word,arry,n);
        SORT(word,arry,n);
        printf("case #%d:\n",i);
        for(int j=0;j<n;j++)
        {
            printf("%s",word[j]);
            if(j!=n-1)
                printf(" ");
        }
        if(i!=t-1)
            printf("\n");
    }
}
