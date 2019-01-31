#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool judge(char stra[])
{
    int flag = 0;
    for(int x=0;stra[x]!='\0';x++)
    {
        if(stra[x]<'A'||stra[x]>'Z')
            flag++;
    }
    return (flag==0)?true:false;
}
int strlotscpy(char str[][201],char *pos,int n)
{
    int t = 0;
    for( int x=0,h=0;x<n;x++)
    {
        if(pos[x]=='\0')
        {
			 str[t][h]='\0';
            t++;
            h = 0;
        }
        else
        {
             str[t][h]=pos[x];
             h++;
        }
    }
    return t + 1;
}
int main()
{
    int t,k=0;
    scanf("%d",&t);
    getchar();
    for(int x=0;x<t;x++)
    {
        char originalstr[201]="0";
        char str1[101][201]={"0"};
        char *p,*pos;
        pos = originalstr;
        gets(originalstr);
        int m = strlen(originalstr);
        strtok(originalstr," ");
        while(p = strtok(NULL," "))
			k++;
        int wordnumber = strlotscpy(str1,originalstr,m);
        char temp[201];
        for(int x=0;x<wordnumber;x++)
          for(int y=0;y<x;y++)
            if(judge(str1[x])==true&&judge(str1[y])==true&&strcmp(str1[x],str1[y])<0)
            {
                strcpy(temp,str1[x]);
                strcpy(str1[x],str1[y]);
                strcpy(str1[y],temp);
            }
         printf("case #%d:\n",x);
        for(int i =0;i<wordnumber;i++)
        {
            printf("%s",str1[i]);
            if(i<wordnumber-1)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}