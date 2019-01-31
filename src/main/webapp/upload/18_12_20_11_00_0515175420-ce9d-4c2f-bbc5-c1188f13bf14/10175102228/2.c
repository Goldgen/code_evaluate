#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isalpha1(char c)
{ if((c>='A'&&c<='Z'))return 1;
    return 0;
}
int isletter(char*s)
{  int l=strlen(s);
  int i;
  for(i=0;i<l;i++)
  { if(!isalpha1(s[i]))
      return 0;
  }
    return 1;
}
int cmp(const void*a,const void *b)
{ return strcmp((char*)a,(char*)b);
}
int main()
{ int t;
scanf("%d",&t);
int i;
char s[20000];
getchar();
for(i=0;i<t;i++)
{ gets(s);
    int l=strlen(s);
    int j,k,g;
    char s1[1000][201];
    int cnt=0,cnt1=0;
    for(j=0;j<l;j++)
    {    if(s[j]!=' ')
        s1[cnt][cnt1++]=s[j];
        else{ s1[cnt][cnt1]='\0';
            cnt++;
            cnt1=0;
            }
     }
     s1[cnt++][cnt1]='\0';//最后一个单词的结尾标志
     char str[1000][201];
     int cnt2=0;
     int a[1000];
     int cnt3=0;
     for(j=0;j<cnt;j++)
     { if(isletter(s1[j]))
       { str[cnt2][100]=' ';//先初始化
           strcpy(str[cnt2++],s1[j]);
       }
        else
        { a[cnt3++]=j;//用数组a来记录字符串数组中非字母单词的位置
        }
     }g=0;
     k=0;
     qsort(str,cnt2,sizeof(str[0]),cmp);
     printf("case #%d:\n",i);
      for(j=0;j<cnt;j++)
      { if(j==a[g])
        {printf("%s",s1[j]);
        g++;
        }
        else
        { printf("%s",str[k]);
           k++;
        }
        if(j<cnt-1)printf(" ");
        }
    printf("\n");
}
return 0;
}

