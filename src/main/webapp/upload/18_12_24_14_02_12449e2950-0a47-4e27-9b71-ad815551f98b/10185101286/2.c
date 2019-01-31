#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct book
    {
        char name[10];
        char number[20];
        char messege[20];
        char phone[15];
    };
int main()
{
    char order[10]={0};
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    int i;
    char number1[20]={0};
    struct book* record=(struct book*)malloc(100*sizeof(struct book));
    struct book instruct;
    while(scanf("%s",order)!=EOF)
    {
        if(strcmp(order,"ADD")==0)
        {
            scanf("%s",record[count1].name);
            scanf("%s",number1);
            if(strcmp(number1,"NULL")==0)
            {
                record[count1].number[0]='\0';
            }
            else
            {
                while(number1[count2]=='0')
                    {
                        count2+=1;
                    }
                for(i=0;i<20;++i)
                {
                    record[count1].number[i]=number1[count2];
                    ++count2;
                    if(number1[count2]=='\0')
                    {
                        count2=0;
                        break;
                    }
                }
            }
            scanf("%s",record[count1].messege);
            scanf("%s",record[count1].phone);
            if(strcmp(record[count1].number,"NULL")!=0)
            {
                for(i=0;i<count1;++i)
                {
                if(strcmp(record[count1].number,record[i].number)==0)
                {
                    record[count1].name[0]='\0';
                    record[count1].number[0]='\0';
                    record[count1].messege[0]='\0';
                    record[count1].phone[0]='\0';
                    count1-=1;
                    printf("Already Exists\n");
                    count5=1;
                }
                }
            }
            count1+=1;
            if(count5!=1)
            {
               printf("Added\n");
            }
        }
        else if(strcmp(order,"DELETE")==0)
        {
            scanf("%s",number1);
            for(i=0;i<20;++i)
            {
                if(strcmp(record[i].number,number1)==0)
                {
                    count3=1;
                    record[i].name[0]='\0';
                    record[i].number[0]='\0';
                    record[i].messege[0]='\0';
                    record[i].phone[0]='\0';
                }
            }
            if(count3!=0)
            {
                printf("Deleted");
            }
            else
            {
                printf("Not Found");
            }
        }
        else if(strcmp(order,"UPDATE")==0)
        {
            scanf("%s",instruct.name);
            scanf("%s",number1);
            if(strcmp(number1,"NULL")==0)
            {
                instruct.number[0]='\0';
            }
            else
            {
                while(number1[count2]=='0')
                    {
                        count2+=1;
                    }
                for(int i=0;i<20;++i)
                {
                    instruct.number[i]=number1[count2];
                    ++count2;
                    if(number1[count2]=='\0')
                    {
                        count2=0;
                        break;
                    }
                }
            }
            scanf("%s",instruct.messege);
            scanf("%s",instruct.phone);
            if(strcmp(instruct.number,"NULL")!=0)
            {
                for(i=0;i<100;++i)
                {
                    if(strcmp(record[i].number,instruct.number)==0)
                    {
                        strcpy(record[i].name,instruct.name);
                        strcpy(record[i].messege,instruct.messege);
                        strcpy(record[i].phone,instruct.phone);
                        count4=1;
                    }
                }
                if(count4==1)
                {
                    printf("Updated");
                }
                else
                {
                    printf("Not Found");
                }
            }
        }
        /*else if(strcmp(order,"SORT")==0)
        {
            for(i=0;i<count1-1;++i)
            {
                for(int j=0;j<count1-i-1;++j)
                {
                    for()
                }
            }
        }
        else if(strcmp(order,"FIND")==0)
        {
            for(i=0;i<20;++i)
            {
                if
            }
        }*/
    }
    return 0;
}

