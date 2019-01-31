#include<stdio.h>
#include<string.h>

void Convert(char ch[], int a[], int len);

int main()
{
    char ch1[1000],ch2[1000];
    int a[1000],b[1000];
    memset(ch1, 0, sizeof(ch1));
    memset(ch1, 0, sizeof(ch2));
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));//将这些数组清零
    scanf("%s",ch1);
    scanf("%s",ch2);

    int len1, len2, i;
    len1 = strlen(ch1);
    len2 = strlen(ch2);
    int max = (len1>len2) ? len1 : len2;

    Convert(ch1, a, len1);
    Convert(ch2, b, len2);
    //字符串反转并且转换为数字保存到数组里面

    for(i=0; i<max; i++)
    {
        b[i] += a[i];//相加
        if(b[i]>9)
        {
            b[i]-=10;
            b[i+1]+=1;//产生进位
        }
    }
    if(b[max]) printf("%d",b[max]);//如果最高位产生进位
    for(i=max-1; i>=0; i--)
        printf("%d",b[i]);

    return 0;
}

void Convert(char ch[], int a[], int len){
    int i, j = 0;
    for(i=len-1; i>=0; i--)
        a[j++]=ch[i]-'0';
    return;
}


