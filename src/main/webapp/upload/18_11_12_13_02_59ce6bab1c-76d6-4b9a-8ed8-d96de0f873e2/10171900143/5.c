#include <stdio.h>
double price(char);

int main()
{
    char ch;
    char s[5][40]= {"Pine","Fire","Cedar","Maple","Oak"};
    long long num,wid,tall,len;
    double sum,unit,perSum;
    char *str;
    unit=16.0/3/2/4/8;
    sum=0;
    for(;;)
    {
        scanf("%c",&ch);
        if(ch=='T')
            break;
        scanf("%lld %lld %lld %lld",&num,&wid,&tall,&len);
        getchar();
        perSum=num*wid*tall*len/12.0*price(ch);
        sum+=perSum;
        for(int i=0; i<5; i++)
        {
            if(s[i][0]==ch)
                str=s[i];
        }
        printf("%lld %lld*%lld*%lld %s, Cost: $%.2f\n",num,wid,tall,len,str,perSum);
    }
    printf("Total cost: $%.2f",sum);
    return 0;
}

double price(char c)
{
    switch(c)
    {
    case 'P':
        return .89;
    case 'F':
        return 1.09;
    case 'C':
        return 2.26;
    case 'M':
        return 4.5;
    case 'O':
        return 3.1;
    default :
        return 0;
    }
}
