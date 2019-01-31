#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char lon[1005],s[1005];
    int i,j,x,y,count=0;
    char *t="#";
    while(1){
    scanf("%s",lon);
    if(strcmp(t,s)==0){
        break;}
    getchar();
    scanf("%s",s);

    x=strlen(lon);
    y=strlen(s);
    char temp[1005];
    for(i=0;i<x;i++)
    {
        if(s[0]==lon[i])
        {
            for(j=0;j<y;j++)
            {
                temp[j]=lon[i+j];
            }
            if(strcmp(s,temp)==0)
			{count+=1;}
        }
    }

    printf("%d\n",count);}
    return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char a[1005],b[1005];
    int i,j,x,y,count=0,m=0;
    scanf("%s",a);
    getchar();
    scanf("%s",b);
    x=strlen(a);
    y=strlen(b);
    char temp[1005];
	int p[100];
    for(i=0;i<x;i++)
    {
        if(b[0]==a[i])
        {
            for(j=0;j<y;j++)
            {
                temp[j]=a[i+j];
            }
            if(strcmp(b,temp)==0)
			{count+=1;
			   p[m]=i;
			   m++;}
        }
    }
		printf("%d",count);

    return 0;
}*/