#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    int n;
    int x;
    int c=0;
    scanf("%d",&n);
    int data[n];
    for(int i=0;i<n;i++)
        scanf("%d",&data[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(data[i]==x){
   if(c==0)
    printf("%d",i);
   else
    printf(" %d",i);
    c++;
    }
    }
    if(c==0)
        printf("ERROR");

	return 0;
}
