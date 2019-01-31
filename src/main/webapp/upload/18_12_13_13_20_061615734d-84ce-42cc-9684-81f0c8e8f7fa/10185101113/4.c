#include <stdio.h>
char* _replace(char *p)
{
    char *result=p;
    while (*p!='\0')
    {
		if (*p=='Z')
        {
            *p='A';
            p++;
        }
        else
        {
            ++*p;
            p++;
        }
        
    }
    *p='\0';
    return result;

}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char str[n][51];
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    for(j=0;j<n;j++)
    {
        char *pstr=str[j];
        printf("case #%d: %s",j,_replace(pstr));
        if(j!=n-1)
            printf("\n");
    }
    return 0;
}