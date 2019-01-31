#include <stdio.h>
unsigned hex2int(char hex[]) {
int i,num=0;
for(i=0;hex[i];++i) {
if(hex[i]>='a'&&hex[i]<='f')
num = 16*num + hex[i]-'a'+10;
else if(hex[i]>='A' && hex[i]<='F')
num = 16*num + hex[i]-'A'+10;
else if(hex[i]>='0'&&hex[i]<='9')
num = 16*num+hex[i]-'0';
}
return num;
}
int main() {
char s[9];
scanf("%s",s);
printf("%u",hex2int(s));
return 0;
}
