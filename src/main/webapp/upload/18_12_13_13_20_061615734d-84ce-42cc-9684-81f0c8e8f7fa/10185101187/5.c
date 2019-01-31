#include <stdio.h>
#include <string.h>

void Number2Alpha(int num, char* mptr)
{
    switch(num)
    {
        case 1: strcpy(mptr, "January"); break;
        case 2: strcpy(mptr, "February"); break;
        case 3: strcpy(mptr, "March"); break;
        case 4: strcpy(mptr, "April"); break;
        case 5: strcpy(mptr, "May"); break;
        case 6: strcpy(mptr, "June"); break;
        case 7: strcpy(mptr, "July"); break;
        case 8: strcpy(mptr, "August"); break;
        case 9: strcpy(mptr, "September"); break;
        case 10: strcpy(mptr, "October"); break;
        case 11: strcpy(mptr, "November"); break;
        default : strcpy(mptr, "December"); break;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    char mptr[20];
    Number2Alpha(num, mptr);
    printf("%s", mptr);
}
