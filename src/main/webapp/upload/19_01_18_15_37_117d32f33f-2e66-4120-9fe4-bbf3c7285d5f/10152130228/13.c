#include <stdio.h>
#include <stdlib.h>

/*Beginning C ????????3.2
???
12 31 2003
31st December 2003*/

int main()
{
    long int month, date, year;
    scanf("%ld%ld%ld", &month, &date, &year);
    if(date==11) printf("11th ");
    else if(date==12) printf("12th ");
    else{
        int datee;
        datee = date%10;
        switch(datee){
            case 1: printf("%ldst ", date);break;
            case 2: printf("%ldnd ", date);break;
            case 3: printf("%ldrd ", date);break;
            case 4:case 5:case 6:case 7:case 8:case 9:case 0: printf("%ldth ", date);break;
        }
    }

    switch(month){
        case 1: printf("January ");break;
        case 2: printf("February ");break;
        case 3: printf("March ");break;
        case 4: printf("April ");break;
        case 5: printf("May ");break;
        case 6: printf("June ");break;
        case 7: printf("July ");break;
        case 8: printf("August ");break;
        case 9: printf("September ");break;
        case 10: printf("October ");break;
        case 11: printf("November ");break;
        case 12: printf("December ");break;
    }
    printf("%ld", year);
    return 0;
}
