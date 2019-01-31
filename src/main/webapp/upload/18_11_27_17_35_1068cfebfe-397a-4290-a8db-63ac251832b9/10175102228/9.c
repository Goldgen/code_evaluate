#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   char a[300];
    char b[300];
    scanf("%s",a);
    scanf("%s",b);
    int len1=strlen(a),len2=strlen(b);
    char c[300];
    int i,j,cnt=0;
     int carry=0;
     int x;
     for(i=len1-1,j=len2-1;j>=0&&i>=0;i--,j--)
      {   x=a[i]+b[j]-'0'-'0'+carry;
            c[cnt++]=x%10+'0';
           if(x>=10)carry=1;
           else carry=0;
       }
       while(j>=0)
        {   x=b[j]-'0'+carry;
           c[cnt++]='0'+x%10;
          if(x>=10)carry=1;
          else carry=0;
          j--;
        }
          while(i>=0)
        {   x=a[i]-'0'+carry;
           c[cnt++]='0'+x%10;
          if(x>=10)carry=1;
          else carry=0;
          i--;
        }
        int k;
        if(carry)printf("1");//最高位可能还有进位
        for(k=cnt-1;k>=0;k--)
        printf("%c",c[k]);//输出从最高位到最低位
  return 0;
}