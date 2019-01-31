#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

struct student
{
    char name[10];
    char id[15];
    long long len_of_id;
    long long id_int;
    char email[16];
    char tele[15];
};

void add(struct student *stu[], int *pstuNum);
void del(struct student *stu[], int *pstuNum);
void update(struct student *stu[], int *pstuNum);
void sort(struct student *stu[], int *pstuNum);
void find(struct student *stu[], int *pstuNum);
long long power10(long long n);
void print(struct student *stu[], int *pstuNum);

int main()
{
    char cmd[10];
    int stuNum = 0;
    struct student *stu[1000];
    for (int i = 0; i < 1000; ++i)
        stu[i] = malloc(sizeof(struct student));
    while (scanf("%s", cmd) > 0){
        if (strcmp(cmd, "ADD") == 0){
            ++stuNum;
            add(stu, &stuNum);
        }
        else if (strcmp(cmd, "DELETE") == 0)
            del(stu, &stuNum);
        else if (strcmp(cmd, "UPDATE") == 0)
            update(stu, &stuNum);
        else if (strcmp(cmd, "SORT") == 0)
            sort(stu, &stuNum);
        else if (strcmp(cmd, "FIND") == 0)
            find(stu, &stuNum);
        else if (strcmp(cmd, "PRINT") == 0){
            print(stu, &stuNum);
        }
        memset(cmd, 0, sizeof(cmd));
    }
    for (int i = 0; i < 1000; ++i)
        free(stu[i]);
    return 0;
}
void add(struct student *stu[], int *pstuNum)
{
    scanf("%s", stu[*pstuNum - 1]->name);
    char c;
    c = getchar();
    c = getchar();
    while (c == '0')
        c = getchar();
    if (c == ' ')
        strcpy(stu[*pstuNum - 1]->id, "0");
    else{
        int i = 0;
        stu[*pstuNum - 1]->id[i] = c;
        ++i;
        while ((stu[*pstuNum - 1]->id[i] = getchar()) != ' ')
            ++i;
        stu[*pstuNum - 1]->id[i] = '\0';
    }
    scanf("%s", stu[*pstuNum - 1]->email);
    scanf("%s", stu[*pstuNum - 1]->tele);
    bool flag = true;
    if (*pstuNum > 1 && strcmp(stu[*pstuNum - 1]->id, "NULL") != 0){
        for (int i = 0; i < *pstuNum - 1; ++i){
            if (strcmp(stu[i]->id, stu[*pstuNum - 1]->id) == 0){
                printf("Already Exists\n");
                memset(stu[*pstuNum - 1]->email, 0, sizeof(stu[*pstuNum - 1]->email));
                memset(stu[*pstuNum - 1]->id, 0, sizeof(stu[*pstuNum - 1]->id));
                memset(stu[*pstuNum - 1]->name, 0, sizeof(stu[*pstuNum - 1]->name));
                memset(stu[*pstuNum - 1]->tele, 0, sizeof(stu[*pstuNum - 1]->tele));
                (*pstuNum)--;
                flag = false;
                break;
            }
        }
    }
    if (flag)
        printf("Added\n");
}
void del(struct student *stu[], int *pstuNum)
{
    char c;
    char nowID[15];
    c = getchar();
    c = getchar();
    while (c == '0')
        c = getchar();
    if (c == '\n')
        strcpy(nowID, "0");
    else{
        int i = 0;
        nowID[i] = c;
        ++i;
        while ((nowID[i] = getchar()) != '\n')
            ++i;
        nowID[i] = '\0';
    }
    bool flag = false;
    for (int i = 0; i < *pstuNum; ++i){
        if (strcmp(nowID, stu[i]->id) == 0){
            flag = true;
            printf("Deleted\n");
            for (int j = i; j < *pstuNum; ++j)
                *stu[j] = *stu[j + 1];
            break;
        }
    }
    if (flag)
        (*pstuNum)--;
    else
        printf("Not Found\n");
}
void update(struct student *stu[], int *pstuNum)
{
    struct student newStudent;
    scanf("%s", newStudent.name);
    char c;
    c = getchar();
    c = getchar();
    while (c == '0')
        c = getchar();
    if (c == ' ')
        strcpy(newStudent.id, "0");
    else{
        int i = 0;
        newStudent.id[i] = c;
        ++i;
        while ((newStudent.id[i] = getchar()) != ' ')
            ++i;
        newStudent.id[i] = '\0';
    }
    scanf("%s", newStudent.email);
    scanf("%s", newStudent.tele);
    bool flag = true;
    for (int i = 0; i < *pstuNum; ++i){
        if (strcmp(stu[i]->id, newStudent.id) == 0){
            printf("Updated\n");
            strcpy(stu[i]->name, newStudent.name);
            strcpy(stu[i]->email, newStudent.email);
            strcpy(stu[i]->id, newStudent.id);
            strcpy(stu[i]->tele, newStudent.tele);
            flag = false;
            break;
        }
    }
    if (flag)
        printf("Not Found\n");
}
void sort(struct student *stu[], int *pstuNum)
{
    for (int i = 0; i < *pstuNum; ++i){
        if (strcmp(stu[i]->id, "NULL") == 0)
            stu[i]->id_int = LLONG_MAX;
        else{
            stu[i]->len_of_id = strlen(stu[i]->id);
            stu[i]->id_int = 0;
            for (int j = 0; j < stu[i]->len_of_id; ++j)
                stu[i]->id_int += power10(stu[i]->len_of_id - j - 1) * (stu[i]->id[j] - '0');
        }
    }
    for (int i = 0; i < *pstuNum - 1; ++i)
        for (int j = 0; j < *pstuNum - i - 1; ++j)
            if (stu[j]->id_int > stu[j + 1]->id_int){
                struct student *temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
    printf("Sorted\n");
}
long long power10(long long n)
{
    long long ans = 1;
    for (int i = 0; i < n; ++i)
        ans *= 10;
    return ans;
}
void find(struct student *stu[], int *pstuNum)
{
    char c;
    char nowID[15];
    c = getchar();
    c = getchar();
    while (c == '0')
        c = getchar();
    if (c == '\n')
        strcpy(nowID, "0");
    else{
        int i = 0;
        nowID[i] = c;
        ++i;
        while ((nowID[i] = getchar()) != '\n')
            ++i;
        nowID[i] = '\0';
    }
    bool flag = false;
    for (int i = 0; i < *pstuNum; ++i){
        if (strcmp(nowID, stu[i]->id) == 0){
            flag = true;
            printf("%s %s %s %s\n",
                   stu[i]->name, stu[i]->id, stu[i]->email, stu[i]->tele);
            break;
        }
    }
    if (!flag)
        printf("Not Found\n");
}
void print(struct student *stu[], int *pstuNum){
    if (*pstuNum > 0){
        printf("%8s %11s %15s %11s\n", "NAME", "STUDENT_ID", "EMAIL", "TELEPHONE");
        for (int i = 0; i < *pstuNum; ++i)
            printf("%8s %11s %15s %11s\n",
            stu[i]->name, stu[i]->id, stu[i]->email, stu[i]->tele);
    }
    else
        printf("Empty\n");
}
