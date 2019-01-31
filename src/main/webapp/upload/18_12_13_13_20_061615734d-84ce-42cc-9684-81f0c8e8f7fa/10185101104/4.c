#include <stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        printf("case #%d: ",i);
        while((c=getchar())!='\n')
        {
            if(c=='Z')
                c='A';
            else
                c++;
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
