#include<stdio.h>

int main(){
int n,m,k,i,temp=0;
scanf("%d",&n);
int s[n];
for(i=0;i<n;i++){
    scanf("%d",&s[i]);
}
scanf("%d",&m);
for(i=0;i<n;i++){
    if(m==s[i]){
        k=i;
        break;
    }
    else temp++;
}
if(temp==n)
    printf("ERROR");
else{
        for(i=k;i<n;i++){
            s[i]=s[i+1];
        }
        printf("%d",s[0]);
        for(i=1;i<n-1;i++){
            printf(" %d",s[i]);
        }
}
return 0;
}
