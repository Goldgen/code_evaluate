#include <stdio.h>
#include<ctype.h>
char ch(int a);
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    if((a<=32&&b<=32)||a==127)
    {
        printf("NONE");
    }
    else if(a<=32&&b>=32)
    {
        printf("33      !");
        for(i=34;i<=b;++i)
        {
            if(i<100)
            {
                printf("\n%d      %c",i,ch(i));
            }
            else if(i<=126)
            {
                printf("\n%d     %c",i,ch(i));
            }
        }
    }
    else if(a>32&&b>32)
    {
        if(a<100)
            {
                printf("%d      %c",a,ch(a));
            }
            else if(a<=126)
            {
                printf("%d     %c",a,ch(a));
            }
		for(i=a+1;i<=b;++i)
        {
			if(i<100)
            {
                printf("\n%d      %c",i,ch(i));
            }
            else if(i<=126)
            {
                printf("\n%d     %c",i,ch(i));
            }
        }
    }
    return 0;
}
char ch(int a)
{
    return a;
}
