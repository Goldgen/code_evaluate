#include <stdio.h>


int main()
{
    char str1[80];
    char str2[80];
    scanf("%s %s",str1,str2);
    int len1,len2,lenMin,i;
    len1=strlen(str1);
    len2=strlen(str2);
    lenMin=len1<len2?len1:len2;
    for(i=0;i<lenMin;i++)
        printf("%c%c",str1[i],str2[i]);
    if(lenMin==len2){
        for(i=lenMin;i<len1;i++)
            printf("%c",str1[i]);
    }
    else{
        for(i=lenMin;i<len2;i++)
            printf("%c",str2[i]);
    }
    return 0;
}
