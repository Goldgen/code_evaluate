#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n,i,m=0,j,*num,y,k,l=0,z=0,s=0,p,q,w,a=0,c,d;
    char **str,x,*temp;
    str=(char**)malloc(sizeof(char*)*200);
    temp=(char*)malloc(sizeof(char)*100);
    num=(int*)malloc(sizeof(int)*100);
    num[0]=0;
    for(j=0;j<200;j++)
    {
        *(str+j)=(char*)malloc(sizeof(char)*200);
    }
    
    scanf("%d",&n);
    for(i=0;;i++)
    {
        scanf("%s",str[i]);
        x=getchar();
        if(x=='\n')
        {
            m++;
            num[m]=i;
        }
        if(m==3)
            break;
    }
    for(k=0;k<i;k++)
    {
        while(str[k][l]!='\0')
        {
            if(str[k][l]<65&&str[k][l]>90)
            {
                z=1;
                break;
            }
            l++;
        }
        if(z==1)
        {
            num[n+s]=k;
            s++;
            z=0;
        }
    }
    for(p=0;p<n;p++)
    {
        for(q=num[p];q<=num[p+1];q++)
        {
            for(w=0;w<s;w++)
            {
                if(q==num[n+w])
                    a=1;
            }
            if(a==1)
            {
                a=0;
                continue;
            }
            for(c=0;c<n-1;c++)
            {
                for(d=c+1;d<n;d++)
                {
                    if(strcmp(str[d],str[c])<0)
                    {
                        temp=str[c];
                        str[c]=str[d];
                        str[d]=temp;
                    }
                }
            }
        }
    }
    for(y=0;y<200;y++)
    {
        free(str[y]);
    }
    free(str);
    return 0;
}



