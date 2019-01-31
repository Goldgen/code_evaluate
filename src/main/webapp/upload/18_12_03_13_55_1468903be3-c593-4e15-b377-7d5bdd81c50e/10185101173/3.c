#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[80],brr[80],crr[160];
    int m=0,i=0,p=0,q=0,z=0;
    scanf("%s %s",arr,brr);
    while(arr[i]!='\0'||brr[i]!='\0')
    {
        if(m==0&&arr[i]!='\0')
        {
            if(i==0)
                crr[i]=arr[i];
            else if(i!=0&&q!=1)
            {
                crr[2*i]=arr[i];
                crr[2*i+1]='\0';
            }
            else if(q==1)
            {
                if(z==0)
                    {
                        p=2*i;
                        z=1;
                    }
                crr[p]=arr[i];
                crr[p+1]='\0';
                ++p;
            }
            if(brr[i]!='\0'&&q!=1)
                m=1;
            if(q==1)
                ++i;
        }
        if(arr[i]=='\0')
        {
            m=1;
            ++q;
        }
        if(m==1&&brr[i]!='\0')
        {
            if(i==0)
                crr[i+1]=brr[i];
            else if(i!=0&&q!=1)
            {
                crr[2*i+1]=brr[i];
                crr[2*i+2]='\0';
            }
            else if(q==1)
                {
                    if(z==0)
                    {
                        p=2*i;
                        z=1;
                    }
                    crr[p]=brr[i];
                    crr[p+1]='\0';
                    ++p;
                }
            if(arr[i]!='\0'&&q!=1)
                m=0;
            ++i;
        }
        if(brr[i]=='\0')
        {
            m=0;
            ++q;
        }
        if(q==2)
            break;
    }
    printf("%s",crr);
    return 0;
}