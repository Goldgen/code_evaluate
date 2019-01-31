/******
?????????????
80.?????????????????????????????????
????????(?????8????80)?????????8??????

Input ????????(?????8????80)?
Output ??????????8??????

Sample Input
universe

Sample Output
86483773
******/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


char AlphaInDial(char);

int main()
{
    char rst[9] = {0};

    int i = 0;
    char c = getchar();
    while(c != EOF && i < 8){
        c = tolower(c);
        if(islower(c)){
            rst[i] = AlphaInDial(c);
            i++;
        }

        c = getchar();
    }

    printf("%s", rst);

    return 0;
}

char AlphaInDial(char c){

    const char dial[][3] = {
                            "123",
                            "456",
                            "789",
                        };

    if(islower(c)){
        switch(c){
        case 'a':
        case 'b':
        case 'c':
            return dial[0][1];

        case 'd':
        case 'e':
        case 'f':
            return dial[0][2];

        case 'g':
        case 'h':
        case 'i':
            return dial[1][0];

        case 'j':
        case 'k':
        case 'l':
            return dial[1][1];

        case 'm':
        case 'n':
        case 'o':
            return dial[1][2];

        case 'p':
        case 'q':
        case 'r':
        case 's':
            return dial[2][0];

        case 't':
        case 'u':
        case 'v':
            return dial[2][1];

        //case 'w':
        //case 'x':
        //case 'y':
        //case 'z':
        default:
            return dial[2][2];
        }
    }

    return -1;
}
