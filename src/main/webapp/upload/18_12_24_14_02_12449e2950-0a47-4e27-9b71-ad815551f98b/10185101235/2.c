#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
typedef struct contacts contacts;
struct contacts
{
    char name[9];
    char IDstr [11];
    long long int ID;
    char mail[16];
    char tel[12];
};

int main (void)
{
    long long int dig = 1;
    contacts* excg;     //交换指针的中间变量
    int t = 0;          //循环编号t
    int j = 0;          //循环编号j
    long long int operNum = 0;    //需要进行操作的学号
    contacts* number[300];        //数据的指针数组
    contacts* update = (contacts*)malloc(sizeof(contacts));     //储存将要更新的数据
    int i = 0;          //即将输入的数据的编号
    char command[7] = "";       //输入的命令
    command[0] = getchar();
    while(command[0]!=EOF)
    {
        scanf("%s",command+1);
        getchar();
        if(strcmp(command,  "ADD" )==0)
        {
            number[i] = (contacts*)malloc(sizeof(contacts));
            scanf("%s",number[i]->name);
            scanf("%s ",number[i]->IDstr);
            scanf("%s %s",number[i]->mail,number[i]->tel);
            if(number[i]->IDstr[0]!='N')
            {
                number[i]->ID = 0;
                for(t=0;t<strlen(number[i]->IDstr);t++)
                {
                    for(dig = 1,j=0;j<strlen(number[i]->IDstr)-t-1;j++)
                    {
                        dig = dig*10;
                    }
                    number[i]->ID += (number[i]->IDstr[t]-'0') * dig;
                }

            }
            else
            {
                number[i]->ID = 100000000000;
            }
            getchar();
            if(number[i]->IDstr[0]!='N')
            {
                for(t=0;t<i;t++)
                {
                    if(number[t]->ID==number[i]->ID)
                    {
                        printf("Already Exists\n");
                        free(number[i]);
                        break;
                    }
                }
            }
            if (t == i || number[i]->IDstr[0]=='N')
            {
                i++;
                printf("Added\n");
            }
        }

        else if(strcmp(command,  "DELETE")==0)
        {
            scanf("%lld",&operNum);
            getchar();
            for(t=0;t<i;t++)
            {
                if(number[t]->ID==operNum)
                {
                    free(number[t]);
                    number[t] = NULL;
                    for(j=t;j<i-1;j++)
                    {
                        number[j] = number[j+1];
                    }
                    printf("Deleted\n");
                    number[i-1] = NULL;
                    i--;
                    t--;
                    break;
                }

            }
            if(t==i)
                printf("Not Found\n");
        }

        else if(strcmp(command,  "UPDATE")==0)
        {
            scanf("%s",update->name);
            scanf("%lld ",&update->ID);
            scanf("%s %s",update->mail,update->tel);
            getchar();
            for(t=0;t<i;t++)
            {
                if(number[t]->ID==update->ID)
                {
                    strcpy(number[t]->mail,update->mail);
                    strcpy(number[t]->tel,update->tel);
                    strcpy(number[t]->name,update->name);
                    printf("Updated\n");
                    break;
                }
            }
            if(t == i)
                printf("Not Found\n");
        }

        else if(strcmp(command,  "SORT"  )==0)
        {
            for(t=0;t<i-1;t++)
            {
                for(j=i-1;j>t;j--)
                {
                    if(number[j]->ID < number[j-1]->ID)
                    {
                        excg = number[j];
                        number[j] = number[j-1];
                        number[j-1] = excg;
                    }
                }
            }
            printf("Sorted\n");
        }

        else if(strcmp(command,  "FIND"  )==0)
        {
            scanf("%lld",&operNum);
            getchar();
            for(t=0;t<i;t++)
            {
                if(number[t]->ID==operNum)
                {
                    printf("%s ",number[t]->name);
                    if(number[t]->IDstr[0]=='N')
                        printf("%s ",number[t]->IDstr);
                    else
                        printf("%lld ",number[t]->ID);
                    printf("%s ",number[t]->mail);
                    printf("%s\n",number[t]->tel);
                    break;
                }
            }
            if(t==i)
                printf("Not Found\n");
        }

        else if(strcmp(command,  "PRINT" )==0)
        {
            if(i!=0)
            {
                printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
                for(t=0;t<i;t++)
                {
                    printf("%8s ",number[t]->name);
                    if(number[t]->IDstr[0]=='N')
                        printf("%11s ",number[t]->IDstr);
                    else
                        printf("%11lld ",number[t]->ID);
                    printf("%15s ",number[t]->mail);
                    printf("%11s\n",number[t]->tel);
                }
            }
            else
                printf("Empty\n");
        }
        command[0] = getchar();
    }
}