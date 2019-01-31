#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[90];
    char substr[90];
    int i,j,k,number=0;
    int temp=-1;
    gets(str);
    gets(substr);
    int flag=0;
    for(i=0;str[i]!='\0';i++){
        for(j=i,k=0;str[j]==substr[k];j++,k++)
        {
            if(substr[k+1]=='\0')
                {number++;
                break;}
        }
        if(number==1&&flag==0)
            {temp=i;
            flag=1;
            }
    }
    printf("%s: %d time(s), first at %d",substr,number,temp);
	return 0;
}

