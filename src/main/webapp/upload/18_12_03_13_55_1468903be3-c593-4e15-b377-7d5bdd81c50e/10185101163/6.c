#include <stdio.h>
#include <string.h>
int Hd(char Arr[]){
int i,n=0,l=strlen(Arr);
for(i=0;i<l;i++){
    if((97<=Arr[i])&&(102>=Arr[i])) n=16*n+Arr[i]-97+10;
    if((65<=Arr[i])&&(70>=Arr[i])) n=16*n+Arr[i]-65+10;
    else if((48<=Arr[i])&&(Arr[i]<=57)) n=16*n+Arr[i]-48;}
return n;
}
int main()
{
    char Arr[9];
    gets(Arr);
    printf("%d",Hd(Arr));
    return 0;
}
