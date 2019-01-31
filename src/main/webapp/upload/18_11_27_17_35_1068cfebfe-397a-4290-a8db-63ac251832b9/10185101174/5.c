#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   int array[100];
   int array1[100];
   int place,element;
   scanf("%d",&number);
   for(int i=0; i<number; i++){
        scanf("%d",&array[i]);
        getchar();
   }
   scanf("%d %d",&place,&element);
   for(int j=0;j<number+1;j++){
    if(place>j){
        array1[j]=array[j];
        printf("%d ",array1[j]);
   }
    else if(place==j){
        array1[j]=element;
        if(j==number)
            printf("%d",element);
        else
            printf("%d ",element);
    }
    else{
        array1[j]=array[j-1];
        if(j==number)
            printf("%d",array1[j]);
        else
            printf("%d ",array1[j]);
    }
}
}
