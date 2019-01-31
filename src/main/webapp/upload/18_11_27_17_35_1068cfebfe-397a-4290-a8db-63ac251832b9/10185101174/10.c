#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   int array[100];
   int c;
   scanf("%d",&number);
   for(int i=0; i<number; i++){
    scanf("%d",&array[i]);
    getchar();
   }
   if(number==1)
    printf("%d",number);
   else{
   for(int j=1; j<number; j++){
        for(int m=j; m>0; m--){
        if(array[m-1]>=array[m]){
        c=array[m-1];
        array[m-1]=array[m];
        array[m]=c;
        }
   }
}
   for(int z=0; z<number; z++){
        if(z==number-1)
    printf("%d",array[z]);
   else
    printf("%d ",array[z]);
   }
}
}