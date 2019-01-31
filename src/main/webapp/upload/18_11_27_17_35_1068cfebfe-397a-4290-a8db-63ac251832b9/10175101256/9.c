#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
const double pi=3.1415926;
int main()
{
    char str[2][10000]={0},sum[10000];
    scanf("%s",str[0]);
    scanf("%s",str[1]);
    int t0=strlen(str[0]);
    int t1=strlen(str[1]);
    int t=t0>t1?0:1;            //记录长度较长的组的组号
    int tmin=t0>t1?t1:t0;
    int tmax=t0>t1?t0:t1;
    int d=t0>t1?t0-t1:t1-t0;
    int c=0;
        for(int i=tmin-1;i>=0;i--){
            str[!t][i+d]=str[!t][i];      //长度较短的组平移
    }
        for(int i=0;i<d;i++){
            str[!t][i]='0';
        }
        for(int i=tmax-1;i>=0;i--){
            sum[i]=c+str[1][i]+str[0][i]-'0';
            if(sum[i]>'9'){
                sum[i]-=10;
                c=1;
                }
            else
                c=0;
        }
        if(c)
            printf("%d",c);
        for(int i=0;i<tmax;i++){
            printf("%c",sum[i]);
        }
    }
