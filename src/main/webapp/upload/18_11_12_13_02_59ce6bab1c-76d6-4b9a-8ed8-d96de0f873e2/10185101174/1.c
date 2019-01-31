#include <stdio.h>
#include <stdlib.h>

int times(int ,int );

int main(){
  int a;
  scanf("%d",&a);
  for(int i=1;i<=a;i++){
    for(int j=1;j<=i;j++){
        printf(" %d * %d = %2d",j,i,times(j,i));
    }
    if(i!=a)
    printf("\n");
  }
}
int times(int m,int n){
    int min;
    min=m*n;
    return min;
}