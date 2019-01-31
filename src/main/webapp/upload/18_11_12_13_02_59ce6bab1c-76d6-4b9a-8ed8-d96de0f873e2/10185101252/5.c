#include <stdio.h>
#include <ctype.h>

char type;
int num, width, height, length;
double ASCII[150];
char types[150][10];
double total = 0;

int getChar(){
    char c;
    int i;
    do{
        c = getchar();
        i = !isalpha(c);
    }while(i);
    if(c != 'T')
        getchar();
    return c;
}

int main(int argc, char* argv[]){

    ASCII['P'] = 0.89;
    ASCII['F'] = 1.09;
    ASCII['C'] = 2.26;
    ASCII['M'] = 4.50;
    ASCII['O'] = 3.10;
    sprintf(types['P'], "Pine");
    sprintf(types['F'], "Fire");
    sprintf(types['C'], "Cedar");
    sprintf(types['M'], "Maple");
    sprintf(types['O'], "Oak");
    while((type = getChar()) && type != 'T'){
        scanf("%d%d%d%d", &num, &width, &height, &length);
        double cost = ASCII[type]*num*(width*height*length*12)/144;
        total += cost;
        printf("%d %d*%d*%d %s, Cost: $%.2lf\n",
               num, width, height, length, types[(int)type], cost+1e-7);
    }
    printf("Total cost: $%.2f", total+1e-7);
    return 0;
}
