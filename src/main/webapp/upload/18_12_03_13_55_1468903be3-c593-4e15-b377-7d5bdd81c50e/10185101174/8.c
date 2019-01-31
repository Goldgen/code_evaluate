#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
   bool judge=true;
   char ch[81];
   gets(ch);
   for(int i=strlen(ch)-1,j=0; i>=0; i--){
    if(ch[i]==ch[j])
        j++;
    else{
        printf("False");
        judge=false;
        break;
    }
   }
   if(judge==true)
    printf("True");
}
