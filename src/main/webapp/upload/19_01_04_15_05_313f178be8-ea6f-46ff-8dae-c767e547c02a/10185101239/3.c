#include <stdio.h>
#include <string.h>

int main(){
char A[100],B[100];
char tmp[100];
char c;
c=getchar();
while(c!='#'){
scanf("%s",A);
scanf("%s",B);
int m,n;
m = strlen(A);
n = strlen(B);
int i,k,q=0;
for(i=0;i<m;i++){
      if ( A[i]==B[0]){
            for(k=i;k<n;k++){
               tmp[k]=A[i+k];
            }
             if(strcmp(tmp,B)==0){
                q++;
             }
}
}
if (q==0)
    printf ("0");
else {
        printf ("%d\n",q);}
}
return 0;

}
