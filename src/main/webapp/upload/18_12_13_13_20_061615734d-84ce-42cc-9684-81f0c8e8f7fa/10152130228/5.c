#include <stdio.h>
#include <stdlib.h>

void Number2Alpha(int num, char* mpt){
	char *mptr;
    switch(num){
        case 1: mptr="January";break;
        case 2: mptr="February";break;
        case 3: mptr="March";break;
        case 4: mptr="April";break;
        case 5: mptr="May";break;
        case 6: mptr="June";break;
        case 7: mptr="July";break;
        case 8: mptr="August";break;
        case 9: mptr="September";break;
        case 10: mptr="October";break;
        case 11: mptr="November";break;
        case 12: mptr="December";break;
		default: break;
    }
    puts(mptr);
}

int main()
{
    int num;
    char *mptr;
    scanf("%d", &num);
    Number2Alpha(num, mptr);
    //printf("%s", mptr);
    return 0;
}
