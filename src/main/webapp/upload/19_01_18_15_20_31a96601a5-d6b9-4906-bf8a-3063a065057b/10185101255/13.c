
#include <stdio.h>


int main()
{
    int date,month,year=0;
    scanf("%d %d %d",&month,&date,&year);
   
    switch (date)
    {
        case 1:case 21:case 31:
        {
            if (month==1)
                printf("%dst January %d",date,year);
            else if(month==2)
                printf("%dst February %d",date,year);
            else if(month==3)
                printf("%dst March %d",date,year);
            else if (month==4)
                printf("%dst April %d",date,year);
            else if(month==5)
                printf("%dst May %d",date,year);
            else if(month==6)
                printf("%dst June %d",date,year);
            else if (month==7)
                printf("%dst July %d",date,year);
            else if (month==8)
                printf("%dst August %d",date,year);
            else if(month==9)
                printf("%dst September %d",date,year);
            else if(month==10)
                printf("%dst October %d",date,year);
            else if(month==11)
                printf("%dst November %d",date,year);
            else
                printf("%dst December %d",date,year);
        }
            break;
        case 2:case 22:
        {
            if (month==1)
                printf("%dnd January %d",date,year);
            else if(month==2)
                printf("%dnd February %d",date,year);
            else if(month==3)
                printf("%dnd March %d",date,year);
            else if (month==4)
                printf("%dnd April %d",date,year);
            else if(month==5)
                printf("%dnd May %d",date,year);
            else if(month==6)
                printf("%dnd June %d",date,year);
            else if (month==7)
                printf("%dnd July %d",date,year);
            else if (month==8)
                printf("%dnd August %d",date,year);
            else if(month==9)
                printf("%dnd September %d",date,year);
            else if(month==10)
                printf("%dnd October %d",date,year);
            else if(month==11)
                printf("%dnd November %d",date,year);
            else
                printf("%dnd December %d",date,year);
        }
            break;
        case 3:case 23:
        {
            if (month==1)
                printf("%drd January %d",date,year);
            else if(month==2)
                printf("%drd February %d",date,year);
            else if(month==3)
                printf("%drd March %d",date,year);
            else if (month==4)
                printf("%drd April %d",date,year);
            else if(month==5)
                printf("%drd May %d",date,year);
            else if(month==6)
                printf("%drd June %d",date,year);
            else if (month==7)
                printf("%drd July %d",date,year);
            else if (month==8)
                printf("%drd August %d",date,year);
            else if(month==9)
                printf("%drd September %d",date,year);
            else if(month==10)
                printf("%drd October %d",date,year);
            else if(month==11)
                printf("%drd November %d",date,year);
            else
                printf("%drd December %d",date,year);
        }
            break;
        default:
        {
            if (month==1)
                printf("%dth January %d",date,year);
            else if(month==2)
                printf("%dth February %d",date,year);
            else if(month==3)
                printf("%dth March %d",date,year);
            else if (month==4)
                printf("%dth April %d",date,year);
            else if(month==5)
                printf("%dth May %d",date,year);
            else if(month==6)
                printf("%dth June %d",date,year);
            else if (month==7)
                printf("%dth July %d",date,year);
            else if (month==8)
                printf("%dth August %d",date,year);
            else if(month==9)
                printf("%dth September %d",date,year);
            else if(month==10)
                printf("%dth October %d",date,year);
            else if(month==11)
                printf("%dth November %d",date,year);
            else
                printf("%dth December %d",date,year);
        }
            break;
    }
    
    
    return 0;
    
    
}
