#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[80][80]={'\0'};
    int i=0;//????
    int j=0;//???????
    int max=0;//????
    int max_num=0;//????????
    while((arr[i][j]=getchar())!=EOF)
    {
        if(arr[i][j]==' '||arr[i][j]=='\n')
        {
            arr[i][j]='\0';
            ++i;
            j=0;
        }
        else
        {
            ++j;
        }
    }
    max=strlen(arr[0]);
    for(int k=1;k<=i;++k)
    {
        if(max<strlen(arr[k]))
        {
            max=strlen(arr[k]);
            max_num=k;
        }
    }
    printf("%s\n",arr[max_num]);
    return 0;
}
