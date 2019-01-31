#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char* arr;
    arr=(char *) malloc( 1001*sizeof(char));
    gets(arr);
    for(int i=0; i<strlen(arr); i++)
    {
        if(*(arr+i)=='?')
        {
            for(int j=i-1; j>=0; j--)
            {
                putchar(*(arr+j));
            }
            break;
        }
    }
    free(arr);
}
