#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
int judge(const char str1[],const char str2[],int n)
{
    int i=0,j=0;
    char str3[81]={'\0'};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j-i<0)
                str3[j]=str1[j-i+n];
            else
                str3[j]=str1[j-i];
        }
        if(strcmp(str3,str2)==0)
            return 1;
    }
    return 0;

}
int main()
{
     char str1[81],str2[81];
     scanf("%s %s",str1,str2);
     int f = judge(str1,str2,strlen(str1));
     if(strlen(str1)!=strlen(str2))
     {
         printf("\"%s\" is NOT a rotation of \"%s\"",str1,str2);
         return 0;
     }
    
     if(f==1)
        printf("\"%s\" is a rotation of \"%s\"",str1,str2);
     else
        printf("\"%s\" is NOT a rotation of \"%s\"",str1,str2);
    

        return 0;
}