#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my16pow(int x)
{ int myout=1,i;
  for(i=0;i<x;i++)
    myout=myout*16;
    return myout;
}
int hex2int(char s[])
{ int l=strlen(s);
  int i;
  long int sum=0;
  for(i=l-1;i>=0;i--)
    { if(s[i]>='0'&&s[i]<='9')sum=sum+my16pow(l-1-i)*(s[i]-'0');
       if(s[i]>='a'&&s[i]<='f')sum=sum+my16pow(l-1-i)*(s[i]-'a'+10);
       if(s[i]>='A'&&s[i]<='F')sum=sum+my16pow(l-1-i)*(s[i]-'A'+10);
    }
    return sum;
}
int main()
{ char s[8];
  scanf("%s",s);
  printf("%ld",hex2int(s));
  return 0;

}