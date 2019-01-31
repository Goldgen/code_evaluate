#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
    char* mim;
    int n = 0;
    int i = 0;
    int j = 0;
    int m = 1;
    int word = 0;
    scanf("%d",&n);
    getchar();
    char str[n][201];
    char* ptr[100];
    int checker[100] = {0};

    for(i=0;i<n;i++)
    {
        for(j=0;j<100;j++)
        {
            checker[j]=0;
        }
        m = 1;
        word = 0;
        gets(str[i]);
        for(j=0;str[i][j]!='\0';j++)
        {
            ptr[0] = str[i];

            if(str[i][j]==' '||str[i][j]=='\n')
            {
                str[i][j] = '\0';
                ptr[m] = str[i]+j+1;
                m++;
            }
            else if(isalpha(str[i][j])==0)
                {
                    checker[m-1] = 1;
                }
        }
        word = m;
        for(m=0;m<word;m++)
        {
            if(checker[m] == 0)
            {
                for(j=m+1;j<word;j++)
                {
                    if(checker[j] == 0)
                    {
                        if(strcmp(ptr[m],ptr[j])>0)
                        {
                            mim = ptr[m];
                            ptr[m] = ptr[j];
                            ptr[j] = mim;
                        }
                    }
                }
            }
        }
        printf("case #%d:\n",i);
        for(m=0;m<word;m++)
            {
                printf("%s",ptr[m]);
                if(m!=word-1)
                    printf(" ");
            }
        if(i!=n-1)
            printf("\n");
    }
}
