#include <stdio.h>
#include <stdlib.h>

char list[80];

void output(char list[80])
{
    int n;char x;
    for(n=0;n<8;n++)
    {
        x=list[n];
        if(x=='a'||x=='b'||x=='c')
        {
            printf("2");
        }
        else
        {
            if(x=='d'||x=='e'||x=='f')
            {
                printf("3");
            }
            else
            {
                if(x=='g'||x=='h'||x=='i')
                {
                    printf("4");
                }
                else
                {
                    if(x=='j'||x=='k'||x=='l')
                    {
                        printf("5");
                    }
                    else
                    {
                        if(x=='m'||x=='n'||x=='o')
                        {
                            printf("6");
                        }
                        else
                        {
                            if(x=='p'||x=='q'||x=='r'||x=='s')
                            {
                                printf("7");
                            }
                            else
                            {
                                if(x=='t'||x=='u'||x=='v')
                                {
                                    printf("8");
                                }
                                else
                                {
                                    printf("9");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    int n=0;
    while(scanf("%s",&list[n]))
    {
        n++;
    }
    output(list);
    return 0;
}