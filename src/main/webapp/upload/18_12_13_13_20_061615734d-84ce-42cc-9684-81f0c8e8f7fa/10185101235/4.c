#include<stdio.h>
#include<string.h>

int main (void)
{
    int n = 0;
    scanf("%d",&n);
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        char letter[51];
        scanf("%s",letter);
        for(j=0;j<=51;j++)
        {
            if(letter[j]=='\0')
                break;
            else if(letter[j]=='Z')
                letter[j] = 'A';
            else
                letter[j] += 1;
        }
        printf("case #%d: %s\n",i,letter);
    }
}
