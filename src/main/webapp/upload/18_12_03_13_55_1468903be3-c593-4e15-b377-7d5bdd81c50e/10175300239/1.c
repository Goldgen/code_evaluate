#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    scanf("%s",str);
    int i;
    for(i=0;i<8;i++){
        if(str[i]=='a'||str[i]=='b'||str[i]=='c')
            printf("2");
        else if(str[i]=='d'||str[i]=='e'||str[i]=='f')
            printf("3");
        else if(str[i]=='g'||str[i]=='h'||str[i]=='i')
            printf("4");
        else if(str[i]=='j'||str[i]=='k'||str[i]=='l')
            printf("5");
        else if(str[i]=='m'||str[i]=='n'||str[i]=='o')
            printf("6");
        else if(str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s')
            printf("7");
        else if(str[i]=='t'||str[i]=='u'||str[i]=='v')
            printf("8");
        else
            printf("9");
    }
    return 0;
}
