#include<stdio.h>

int main(){
int n,i,j,k;
scanf("%d",&n);
int s[n+1];
for(i=0;i<n;i++){
    scanf("%d",&s[i]);
}
scanf("%d %d",&j,&k);
for(i=n;i>j;i--){
    s[i]=s[i-1];
}
s[j]=k;
printf("%d",s[0]);
for(i=1;i<=n;i++){
    printf(" %d",s[i]);
}
return 0;
}
