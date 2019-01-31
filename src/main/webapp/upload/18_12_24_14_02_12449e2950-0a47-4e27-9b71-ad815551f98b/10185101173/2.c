#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct add
{
    char name[9];
    long long int number;
    char email[16];
    char phone[12];
}list[100];

int main()
{
    char cmd[10],add_null[12];
    int i=0;
    while(1)
    {
        if(scanf("%s",cmd)==EOF)
            break;
        if(strcmp(cmd, "ADD") == 0)
        {
            int m=0;
            scanf("%s",list[i].name);
            if(scanf("%lld",&list[i].number)==0)
            {
                list[i].number=0;
                scanf("%s",add_null);
            }
            for(int j=0;j<i;++j)
            {
                if(list[i].number==list[j].number)
                {
                    m=1;
                    break;
                }
            }
            scanf("%s %s",list[i].email,list[i].phone);
            ++i;
            if(m==0)
                printf("Added\n");
            else
                printf("Already Exists\n");
        }
        else if(strcmp(cmd, "DELETE") == 0)
        {
            int m=0;
            long long int d_number;
            scanf("%lld",&d_number);
            for(int j=0;j<i;++j)
            {
                if(list[j].number==d_number)
                {
                    for(int k=1;k<=i-1-j;++k)
                        strcpy(list[j+k-1].name,list[j+k].name);
                    for(int k=1;k<=i-1-j;++k)
                        list[j+k-1].number=list[j+k].number;
                    for(int k=1;k<=i-1-j;++k)
                        strcpy(list[j+k-1].email,list[j+k].email);
                    for(int k=1;k<=i-1-j;++k)
                        strcpy(list[j+k-1].phone,list[j+k].phone);
                    m=1;
                    --i;
                    break;
                }
                if(m==0)
                    printf("Not Found\n");
                else
                    printf("Deleted\n");
            }
        }
        else if(strcmp(cmd, "UPDATE") == 0)
        {
            int m=0;
            long long int u_number;
            scanf("%lld",&u_number);
            for(int j=0;j<i;++j)
            {
                if(list[j].number==u_number)
                {
                    scanf("%s",list[j].name);
                    if(scanf("%lld",&list[j].number)==0)
                        list[i].number=0;
                    scanf("%s %s",list[i].email,list[i].phone);
                    m=1;
                    break;
                }
            }
            if(m==0)
                printf("Not Found\n");
            else
                printf("Updated\n");
        }
        else if(strcmp(cmd, "SORT") == 0)
        {
            long long int temp=0;
            char temp_name[9];
            char temp_email[16];
            char temp_phone[12];
            for (int j = 0; j < i - 1; ++j)
            {
                for (int k = 0; k < i - 1 - j; ++k)
                {
                    if(list[k].number>list[k+1].number||(list[k].number==0&&list[k+1].number!=0))
                    {
                        temp = list[k].number;
                        list[k].number = list[k+1].number;
                        list[k+1].number=temp;

                        strcpy(temp_name,list[k].name);
                        strcpy(list[k].name,list[k+1].name);
                        strcpy(list[k+1].name,temp_name);

                        strcpy(temp_email,list[k].email);
                        strcpy(list[k].email,list[k+1].email);
                        strcpy(list[k+1].email,temp_email);

                        strcpy(temp_phone,list[k].phone);
                        strcpy(list[k].phone,list[k+1].phone);
                        strcpy(list[k+1].phone,temp_phone);
                    }
                }
                printf("Sorted\n");
            }
        }
        else if(strcmp(cmd, "FIND") == 0)
        {
            int m=0;
            int j=0;
            long long int f_number;
            for(j=0;j<i;++j)
            {
                if(list[j].number==f_number)
                {
                    m=1;
                }
            }
            if(m==1)
            {
                printf("%s %lld %s %s\n",list[j].name,list[j].number,list[j].email,list[j].phone);
            }
            else
                printf("Not Found");
        }
        else if(strcmp(cmd, "PRINT") == 0)
        {
            printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
            for(int j=0;j<i;++j)
            {
                if(list[j].number==0)
                    printf("%8s        NULL %15s %11s",list[j].name,list[j].email,list[j].phone);
                else
                    printf("%8s %11lld %15s %11s",list[j].name,list[j].number,list[j].email,list[j].phone);
                printf("\n");
            }
        }
        else {break;}
    }
    return 0;
}
