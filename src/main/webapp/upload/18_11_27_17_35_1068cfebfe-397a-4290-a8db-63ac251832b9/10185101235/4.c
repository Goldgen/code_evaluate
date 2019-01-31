#include<stdio.h>
#include<math.h>

int main(void)
{
    double num[11][5];
    int line = 0;
    int row = 0;
    for(line = 0;line<11;line++)
    {
        num[line][0]=2.0+0.1*line;
        num[line][1]=1/num[line][0];
        for(row=2;row<5;row++)
            num[line][row] = pow(num[line][0],row);
    }
    for(line = 0;line<11;line++)
    {
        for(row = 0;row<5;row++)
        {
            printf("%.4lf",num[line][row]);
            if(row!=4)
                printf(" ");
        }
        if(line!=10)
            printf("\n");
    }
}
