#include <stdio.h>
#include <string.h>
#define SIZE 81

int i,j;
int main()
{   char a[SIZE]={'\0'},b[SIZE]={'\0'},max[SIZE]={'\0'};
    int flag=0,long1,longest=0;
    gets(a);
    long1=strlen(a);
    for(i=0;i<long1;i++)
    {
        if(a[i]==' ')
        {   if(longest<j)
            {   strcpy(max,b);
                longest=j;
            }
            j=0;
            flag++;
        }
        else
        {   b[j]=a[i];
            j++;
        }
    }
    if(longest<j)
        strcpy(max,b);
    if(flag==0)
        strcpy(max,a);

    puts(max);
    return 0;
}