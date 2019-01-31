#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[8];
    int num[8];
    int i;
    for(i=0;i<=7;i++)
        scanf("%c",&array[i]);
    for(i=0;i<=7;i++){
        if (array[i]=='a'||array[i]=='b'||array[i]=='c')
            num[i]=2;
        if (array[i]=='d'||array[i]=='e'||array[i]=='f')
            num[i]=3;
        if (array[i]=='g'||array[i]=='h'||array[i]=='i')
            num[i]=4;
        if (array[i]=='j'||array[i]=='k'||array[i]=='l')
            num[i]=5;
        if (array[i]=='m'||array[i]=='n'||array[i]=='o')
            num[i]=6;
        if (array[i]=='p'||array[i]=='q'||array[i]=='r'||array[i]=='s')
            num[i]=7;
        if (array[i]=='t'||array[i]=='u'||array[i]=='v')
            num[i]=8;
        if (array[i]=='w'||array[i]=='x'||array[i]=='y'||array[i]=='z')
            num[i]=9;
    }
    for(i=0;i<=7;i++)
        printf("%d",num[i]);
    return 0;
}
