#include <stdio.h>
#include <string.h>
int main()
{
   int c=1;
   char first[8000];
   char second[8000];
   scanf("%s",first);
   scanf("%s",second);
   if(strlen(first)==strlen(second)){
   for(int a = 0; a < strlen(first); a++){
   if(first[a]==second[0]){
      for(int i = a+1; i<strlen(first); i++){
        if(first[i]==second[c])
            c++;
        else
            break;
      }
      for(int i=0; i<a; i++){
        if(first[i]==second[c])
            c++;
        else
            break;
      }
      if(c==strlen(first)){
        printf("\"%s\" is a rotation of \"%s\"",first,second);
        break;
      }
   }
   if(a==strlen(first)-1){
    printf("\"%s\" is NOT a rotation of \"%s\"",first,second);
    break;
   }
   c=1;
   }
   }
   else
    printf("\"%s\" is NOT a rotation of \"%s\"",first,second);
}
