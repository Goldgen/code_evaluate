#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,count=0;
    int result=1;
    char s[80],x[80];
    gets(s);
    gets(x);
    for(i=0;i<strlen(s);i++)
    {
        result=1;
        for(j=0;j<strlen(x);j++)
        {
            if(x[j]==s[i])
                i++;
            else{
                result=0;
                break;}
        }
        if(result){
        count++;
        if(count==1)
            k=i-strlen(x);}
    }
    printf("%s: %d time(s), first at %d",x,count,count==0?-1:k);
   return 0;
}
