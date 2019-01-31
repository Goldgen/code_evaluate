#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
int n;
int x;
scanf("%d",&n);
int data[n];
for(int i=0;i<n;i++)
scanf("%d",&data[i]);
scanf("%d",&x);
int c=0;
for(int i=0;i<n;i++){
    if(data[i]==x)
    {   c++;
        for(int j=i;j<n-1;j++)
            data[j]=data[j+1];
        break;
    }
}
if(c==0)
    printf("ERROR");
else{
for(int i=0;i<n-1;i++){
        if(i<n-2)
    printf("%d ",data[i]);
else
    printf("%d",data[i]);
}

}
	return 0;
}
