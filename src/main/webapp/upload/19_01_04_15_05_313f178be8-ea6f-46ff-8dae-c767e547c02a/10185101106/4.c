#include<stdio.h>
#include<string.h>
int test(char *a)
{
    int i,k = 0;
    i = strlen(a);
    int n = 0,m = 0;
    for(n = 0;n < i;n++)
    {


        for(m = 0;m < n;m++)
    {
        if(*(a+m)!= *(a+n))
           {
               if(m == n-1)
                k++;
               continue;
           }
           else
            break;
    }
    }
    return k;
};
int judge(char *a,char b)
{
    int i;
    i = strlen(a);
    int n = 0,m = 0;
    while(*(a+n)!=b)
    {
        n++;
    }

        for(m = 0;m < n;m++)
    {
        if(*(a+m)!= *(a+n))
           {
               if(m == n-1)
                return 1;
               continue;

           }
           else
            return 0;
    }


}
int times(char *a,char b)
{
    int i,k = 0;
    i = strlen(a);
    for(int j = 0;j<=i;j++)
    {
        if(b == *(a+j))
            k++;
    }
}
int main()
{
    char str[] = {0};
    gets(str);
    int a;
    a = strlen(str);
    int j;
    j = test(str);
    for(int i = 0;i < j;i++)
    {
        if(judge(str,*(str+i)) == 1)
        printf("%c %d; ",*(str+i),times(str,*(str+i)));

    }

}
