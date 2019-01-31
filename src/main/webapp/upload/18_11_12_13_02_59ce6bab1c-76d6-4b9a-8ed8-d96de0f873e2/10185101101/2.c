#include <stdio.h>
#include <stdlib.h>
void move(int a,int b){
    int i;
    if(b<33)
        {printf("NONE");return;}

    for(i=a;i<=b;++i)
    {
        if(i<33)
            continue;

        if(i>=100)
        printf("%d%6c\n",i,i);
        else
            printf("%d%7c\n",i,i);
    }

}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    move(m,n);
    return 0;
}
