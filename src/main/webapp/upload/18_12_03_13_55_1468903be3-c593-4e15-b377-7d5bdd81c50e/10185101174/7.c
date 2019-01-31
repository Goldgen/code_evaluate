#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   int i=0;
   char array[30][81];
   char result[30];
   while((scanf("%s",array[i]))!=EOF)
    i++;
    strcpy(result,array[0]);
    for(int j=1;j<i;j++){
        if(strlen(array[j])>strlen(result))
            strcpy(result,array[j]);
    }
   printf("%s",result);
}


