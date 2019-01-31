#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char a[1500],b[1500];
   scanf("%s",a);
   while(a[0]!='#'){
    scanf("%s",b);
    int lena=strlen(a);
    int lenb=strlen(b);
    int i,m,n=0;
    for(i=0;i<lena-lenb+1;i++)
        if(a[i]==b[0]){
            int limit=1;
            for(m=0;m<lenb;m++){
                if(a[i+m]!=b[m]){
                    limit=0;
                    break;
                }
            }
            if(limit){
                i+=lenb-1;
                n++;
            }
        }
    printf("%d\n",n);
    scanf("%s",a);
   }
}