#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num[101]={0},i,j,k=0,*m=&num;
    char str[101],ch[101];
    gets(str);
    ch[0]=str[0];
    int t=strlen(ch);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
			continue;
		else
        {
            for(j=0,k=0;j<t;j++)
            {
                if(str[i]==ch[j])
                   *(m+j)+=1;
                else
                    k++;
            }
            if(k==j)
            {
                *(ch+j)=str[i];
                *(m+j)+=1;
                t++;
            }

        }
    }
    for(i=0;i<t;i++)
        printf("%c %d; ",ch[i],num[i]);
}
