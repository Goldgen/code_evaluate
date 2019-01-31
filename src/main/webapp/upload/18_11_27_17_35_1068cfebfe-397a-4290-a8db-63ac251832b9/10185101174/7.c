#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
   bool exist=false;
   int number;
   int array[100];
   int place[100];
   int element;
   int q=0;
   scanf("%d",&number);
   for(int i=0; i<number; i++){
        scanf("%d",&array[i]);
        getchar();
   }
   scanf("%d",&element);
   for(int j=0; j<number; j++){
        if(element==array[j]){
            place[q]=j;
            q++;
            exist=true;
        }
   }
   if(exist){
   for(int w=0;w<q;w++){
    if(w==q-1)
        printf("%d",place[w]);
    else
        printf("%d ",place[w]);
   }
   }
   else
    printf("ERROR");

}