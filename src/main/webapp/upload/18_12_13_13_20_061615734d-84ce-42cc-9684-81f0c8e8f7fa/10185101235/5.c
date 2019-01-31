#include<stdio.h>
char* Number2Alpha(int num, char* mptr);

int main (void)
{
    int month = 0;
    char* mptr = "0";
    scanf("%d",&month);
    puts(Number2Alpha(month,mptr));
}

char* Number2Alpha(int num, char* mptr)
{
    char* mon;
    switch(num)
    {
    case(1):
        mon = "January";
        break;
    case(2):
        mon = "February";
        break;
    case(3):
        mon = "March";
        break;
    case(4):
        mon = "April";
        break;
    case(5):
        mon = "May";
        break;
    case(6):
        mon = "June";
        break;
    case(7):
        mon = "July";
        break;
    case(8):
        mon = "August";
        break;
    case(9):
        mon = "September";
        break;
    case(10):
        mon = "October";
        break;
    case(11):
        mon = "November";
        break;
    default:
        mon = "December";
        break;
    }
    return mon;
}
