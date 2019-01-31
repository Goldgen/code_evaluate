#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
#define FALSE 0
#define TRUE 1
char n1[MAX_LENGTH+10];
char n2[MAX_LENGTH+10];
int an1[MAX_LENGTH+10] = {0};
int an2[MAX_LENGTH+10] = {0};
int main()
{
    int i,j;
    scanf("%s",n1);
    scanf("%s",n2);
    memset(an1,0,sizeof(an1));
    memset(an2,0,sizeof(an2));
    int length1=strlen(n1);
    int length2=strlen(n2);
    j=0;
    for(i=length1-1;i>=0;i--)
    {
        an1[j++]=n1[i]-'0';
    }
    j=0;
    for(i=length2-1;i>=0;i--)
    {
        an2[j++]=n2[i]-'0';
    }
    for(i=0;i<MAX_LENGTH;i++)
    {
        an1[i]+=an2[i];
        if(an1[i]>=10)
        {
             an1[i]-=10;
             an1[i+1]++;
        }
    }
    int flagStart=FALSE;
    for(i=MAX_LENGTH;i>=0;i--)
    {
        if(flagStart)
        printf("%d",an1[i]);
        else if(an1[i])
        {
            printf("%d",an1[i]);
            flagStart=TRUE;
        }
    }
    if(flagStart==FALSE)
    return 0;
    return 0;
}
