int main()
{
    int month,year,date;
    scanf("%d%d%d",&month,&date,&year);
    if(date<=10||date>=20)
    {
        switch(date%10)
        {
        case 1:
            printf("%dst ",date);
            break;
        case 2:
            printf("%dnd ",date);
            break;
        case 3:
            printf("%drd ",date);
            break;
        default:
            break;
        }
    }else
    printf("%dth ",date);

    switch(month)
    {
    case 1:
        printf("January ");
        break;
    case 2:
        printf("February ");
        break;
    case 3:
        printf("March ");
        break;
    case 4:
        printf("April ");
        break;
    case 5:
        printf("May ");
        break;
    case 6:
        printf("June ");
        break;
    case 7:
        printf("July ");
        break;
    case 8:
        printf("August ");
        break;
    case 9:
        printf("September ");
        break;
    case 10:
        printf("October ");
        break;
    case 11:
        printf("November ");
        break;
    case 12:
        printf("December ");
			break;
		default:
			break;
    }
    printf("%d",year);
}
