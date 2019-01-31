#include <stdio.h>
#include <string.h>
struct store
{
    char name[9];
    char id[12];
    char email[16];
    char phone[12];
    long long idnum;
};
int n = 0, i, j, ju;
long long temp;
struct store stu[1000];
char flag[8] = {'\0'}, temp_name[9] = {'\0'}, temp_id[12] = {'\0'}; //卡静态
char temp_email[16] = {'\0'}, temp_phone[12] = {'\0'};

int swap(char * str1, char * str2)
{
    char temp[20] = {'\0'};
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
int add()
{
    ju = 0;
    scanf("%s %s %s %s", stu[n].name, stu[n].id, stu[n].email, stu[n].phone);

    if(strcmp(stu[n].id, "NULL") == 0)
        stu[n].idnum = 100000000000;
    else
        stu[n].idnum = atoll(stu[n].id);
    for(i = 0; i < n; i++)
        if((stu[n].idnum == stu[i].idnum) && (strcmp(stu[i].id, "NULL") != 0))
            ju = 1;
    if(ju)
        puts("Already Exists");
    else
    {
        n++;
        puts("Added");
    }
}
int delete()
{
    ju = 0;
    scanf("%s", temp_id);
    temp = atoll(temp_id);
    for(j = 0; j < n; j++)
        if(stu[j].idnum == temp)
        {
            for(; j < n - 1; j++)
            {
                strcpy(stu[j].name, stu[j + 1].name);
                strcpy(stu[j].id, stu[j + 1].id);
                strcpy(stu[j].email, stu[j + 1].email);
                strcpy(stu[j].phone, stu[j + 1].phone);
                stu[j].idnum = stu[j + 1].idnum;
            }
            n--;
            puts("Deleted");
            ju = 1;
            break;
        }
    if(!ju)
        puts("Not Found");
}
int update()
{
    ju = 0;
    scanf("%s %s %s %s", temp_name, temp_id, temp_email, temp_phone);
    temp = atoll(temp_id);
    for(j = 0; j < n; j++)
        if(temp == stu[j].idnum)
        {
            strcpy(stu[j].name, temp_name);
            strcpy(stu[j].id, temp_id);
            strcpy(stu[j].email, temp_email);
            strcpy(stu[j].phone, temp_phone);
            stu[j].idnum = temp;
            puts("Updated");
            ju = 1;
            break;
        }
    if(!ju)
        puts("Not Found");
}
int sort()
{
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - 1 - i; j++)
            if(stu[j].idnum > stu[j + 1].idnum)
            {
                temp = stu[j].idnum;
                stu[j].idnum = stu[j + 1].idnum;
                stu[j + 1].idnum = temp;
                swap(stu[j].name, stu[j + 1].name);
                swap(stu[j].id, stu[j + 1].id);
                swap(stu[j].email, stu[j + 1].email);
                swap(stu[j].phone, stu[j + 1].phone);
            }
    puts("Sorted");
}
int find()
{
    scanf("%s", temp_id);
    temp = atoll(temp_id);
    ju = 0;
    for(i = 0; i < n; i++)
        if(temp == stu[i].idnum)
        {
            printf("%s %lld %s %s\n", stu[i].name, stu[i].idnum, stu[i].email, stu[i].phone);
            ju = 1;
            break;
        }
    if(!ju)
        puts("Not Found");
}
int print()
{
    if(n == 0)
        puts("Empty");
    else
    {
        puts("    NAME  STUDENT_ID           EMAIL   TELEPHONE");
        for(i = 0; i < n; i++)
        {
            if(stu[i].idnum == 100000000000)
                printf("%8s %11s %15s %11s\n", stu[i].name, "NULL", stu[i].email, stu[i].phone);
            else
            {
                printf("%8s %11lld", stu[i].name, stu[i].idnum);   //卡静态
                printf(" %15s %11s\n", stu[i].email, stu[i].phone);
            }
        }
    }
}
int main()
{
    while(scanf("%s", flag) != EOF)
    {
        if(strcmp(flag, "ADD") == 0)
            add();
        else if(strcmp(flag, "DELETE") == 0)
            delete();
        else if(strcmp(flag, "UPDATE") == 0)
            update();
        else if(strcmp(flag, "SORT") == 0)
            sort();
        else if(strcmp(flag, "FIND") == 0)
            find();
        else if(strcmp(flag, "PRINT") == 0)
            print();
    }
    return 0;
}