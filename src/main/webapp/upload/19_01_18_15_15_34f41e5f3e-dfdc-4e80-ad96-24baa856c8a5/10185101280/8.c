
#include<stdio.h>
#include<math.h>

int main()
{
int a,b;
scanf("%d%d",&a,&b);
int n=0;
int y[1000],s[1000];
while(a>0){   
y[n++]=a%10;
a/=10;
}

b=b%n;
for(int i=0;i<n;i++){
if(i<n-b)	
    s[i]=y[i+b];
else 
s[i]=y[i+b-n];
}	
printf("%d ",n);

	for(int l=0;l<n;l++)
printf("%d",s[n-l-1]);
return 0;
}
