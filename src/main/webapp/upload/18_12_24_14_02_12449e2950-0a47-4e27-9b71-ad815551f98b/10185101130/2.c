#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list list;
struct list
{
    char name[50];
    char stunum[50];
    char email[50];
    char telenum[50];
    long long number[1000];
}*infor[1000];

void ADD(list *infor);
void DELETE(list *infor);
void UPDATE(list *infor);
//void SORT(list* infor);
void FIND(list *infor);
void PRINT(list* infor);


int main()
{
    char func[20];
    int j;
    for(j = 0;j < 1000;j++)
    {
        infor[j] = malloc(sizeof(list));
    }
    while((scanf("%s",func)) != EOF)
    {
        if(strcmp(func,"ADD") == 0)
            ADD(infor);
        if(strcmp(func,"DELETE") == 0)
            DELETE(infor);
        if(strcmp(func,"UPDATE") == 0)
            UPDATE(infor);
        /*if(strcmp(func,"SORT") == 0)
            SORT(infor);*/
        if(strcmp(func,"FIND") == 0)
            FIND(infor);
        if(strcmp(func,"PRINT") == 0)
            PRINT(infor);
    }
    return 0;
}
int i = 0;
char new_stunum[1000][50];
void ADD(list *infor)
{
        scanf("%s",infor[i].name);
        scanf("%s",infor[i].stunum);
        scanf("%s",infor[i].email);
        scanf("%s",infor[i].telenum);
        int m,n,mid;
        int len = strlen(infor[i].stunum);
        for(m = 0;m < 11;m++)
        {
            if(infor[i].stunum[m] != '0')
            {
                mid = m;
                break;
            }
        }//找出第一个不为0的数
        for(n = 0;n < 11;n++)
        {
            new_stunum[i][n] = infor[i].stunum[n+mid];
            if(n+mid == len-1)
            {
                new_stunum[i][n+1] = '\0';
                break;
            }
        }//写出学号省略开头0的形式
        if(i == 0)
            printf("Added\n");
        else if(strcmp(new_stunum[i],"NULL") == 0)
            printf("Added\n");
        else
        {
            for(int j = 0;j < i;j++)
            {
                if(strcmp(new_stunum[i],new_stunum[j]) == 0)
                {
                    printf("Already Exists\n");
                    i--;
                    break;
                }
                else if(j == i-1)
                    printf("Added\n");
            }
        }
        i++;
        }

void DELETE(list *infor)
{
    char delect[50];
    scanf("%s",delect);
    int m,mid;
    char new_delect[50];
    int len = strlen(delect);
    for(m = 0;m < 11;m++)
    {
        if(delect[i] != '0')
        {
            mid = m;
            break;
        }
    }
    for(m = 0;m < 11;m++)
    {
        if(m == len-mid)
        {
            new_delect[m] = '\0';
            break;
        }
        else
             new_delect[m] = delect[m+mid];
    }
    int a,k;
    int j;
    for(a = 0;a < i;a++)
    {
        if(strcmp(new_delect,new_stunum[a]) == 0)
        {
            for(k = a;k < i-1;k++)
            {
                    infor[k] = infor[k+1];
                    strcpy(new_stunum[k],new_stunum[k+1]);
            }
            for(j = 0;j < 50;j++)
            {
                infor[k].name[j] = '\0';
                infor[k].stunum[j] = '\0';
                infor[k].email[j] = '\0';
                infor[k].telenum[j] = '\0';
            }
            printf("Deleted\n");
            i--;
            break;
        }
        else if (a == i - 1)
        {
            printf("Not Found\n");
            break;
        }
    }
}

void UPDATE(list *infor)
{
    char nname[50];
    char nstunum[50];
    char nemail[50];
    char ntelenum[50];
    scanf("%s %s %s %s",nname,nstunum,nemail,ntelenum);
    int m,mid;
    char new_nstunum[50];
    int len = strlen(nstunum);
    for(m = 0;m < 11;m++)
    {
        if(nstunum[m] != '0')
        {
            mid = m;
            break;
        }
    }
    for(m = 0;m < 11;m++)
    {
        if(m == len-mid)
        {
            new_nstunum[m] = '\0';
            break;
        }
        new_nstunum[m] = nstunum[m+mid];
    }
    int t;
    for(t = 0;t < i;t++)
    {
        if(strcmp(new_nstunum,new_stunum[t]) == 0)
        {
            strcpy(infor[t].name,nname);
            strcpy(infor[t].email,nemail);
            strcpy(infor[t].telenum,ntelenum);
            strcpy(infor[t].stunum,new_nstunum);
            printf("Updated\n");
            break;
        }
        else if(t == i-2)
            printf("Not Found\n");
    }
}



/*void SORT(list* infor)
{
    char num[50];
    int m,n,k;
    int len1,len2;
    for(k = 0;k < i-1;k++)
    {
        for(m = 0;m < i-1-k;m++)
        {
            len1 = strlen(num[m]);
            len2 = strlen(num[m+1]);
            if(strcmp(num[m],"NULL") == 0)
               number[m]

            if(len1 != len2)
                longnum = len1 > len2 ? len1 : len2;
            else
            {
                for(n = 0;n < len1;n++)
                {
                    if(num[m][n] > num[m+1][n])
                        longnum = num[m];
                    else if(num[m][n] < num[m+1][n])
                        longnum = num[m+1];
                }
            }
            if(longnum != num[m+1])
            {
                num[m] = num[m+1];
                num[m+1] = longnum;
            }
        }
    }
}//有问题*/

void FIND(list *infor)
{
    char find[50];
    scanf("%s",&find);
    int j;
    for(j = 0;j <= i;j++)
    {
        if(strcmp(find,new_stunum[j]) == 0)
            printf("%s %s %s %s",infor[j].name,new_stunum[j],infor[j].email,infor[j].telenum);
        else if(j == i)
            printf("Not Found\n");

    }
}

void PRINT(list* infor)
{
    int j;
    if(infor[0].name == "NULL")
        printf("Empty\n");
    else
    {
        printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
        for(j = 0;j <= i;j++)
            printf("%8s %11s %15s %11s\n",infor[j].name,new_stunum[j],infor[j].email,infor[j].telenum);
    }

}

