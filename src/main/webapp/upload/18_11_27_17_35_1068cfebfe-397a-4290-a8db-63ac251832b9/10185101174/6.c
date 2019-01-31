#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
   bool exist=false;
   int number;
   int array[100];
   int array1[100];
   int element;
   scanf("%d",&number);
   for(int i=0; i<number; i++){
        scanf("%d",&array[i]);
        getchar();
   }
   scanf("%d",&element);
   for(int j=0; j<number; j++){
        if(array[j]==element){
            exist=true;
            for(int k=0; k<number-1; k++){
                if(k<j)
                array1[k]=array[k];
                else
                array1[k]=array[k+1];
                
            }
			break;
        }
   }
    if(exist){
        for(int q=0; q<number-1; q++){
            if(q==number-2)
                printf("%d",array1[q]);
            else
                printf("%d ",array1[q]);
        }
    }
    else
        printf("ERROR");
}