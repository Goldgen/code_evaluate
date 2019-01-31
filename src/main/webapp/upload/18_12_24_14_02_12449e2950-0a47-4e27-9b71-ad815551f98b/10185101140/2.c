#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char name[10];
    char stunum[15];
    char email[20];
    char phone[15];
}Inform;

typedef struct
{
    Inform *data;
    int total;
    int capacity;
}Gen, *Rec;

void init(Rec rec);
int Search(Rec rec, char* str);
void ADD(Rec rec);
void DELETE(Rec rec);
void UPDATE(Rec rec);
void SORT(Rec rec);
void FIND(Rec rec);
void PRINT(Rec rec);
void _FREE(Rec rec);

int main()
{
    Gen rec;
    init(&rec);

    char cmd[10] = {'\0'};
    while ((scanf("%s",cmd))>0)
    {
        if (strcmp(cmd, "ADD")==0) {
            ADD(&rec);
        }
        else if (strcmp(cmd, "DELETE")==0) {
            DELETE(&rec);
        }
        else if (strcmp(cmd, "UPDATE")==0) {
            UPDATE(&rec);
        }
        else if (strcmp(cmd, "SORT")==0) {
            SORT(&rec);
        }
        else if (strcmp(cmd, "FIND")==0) {
            FIND(&rec);
        }
        else if (strcmp(cmd, "PRINT")==0) {
            PRINT(&rec);
        }

    }
    _FREE(&rec);

    return 0;
}

void init(Rec rec)
{
    rec->data = (Inform*)malloc(sizeof(Inform));
    rec->total = 0;
    rec->capacity = 1;
}

void ADD(Rec rec)
{
    if (rec->total >= rec->capacity)
    {
        rec->data = (Inform*)realloc(rec->data,
                (rec->capacity + 2)*sizeof(Inform));
        rec->capacity += 2;
    }

    char _name[10] = {'\0'}, num[15] = {'\0'};

    scanf("%s",_name);
    scanf("%s",num);//是否为NULL//查找是否已出现过
    //001-->1
    int b;
    while (num[0]=='0'){
        for (b=0; num[b]!='\0'; b++){
            num[b] = num[b+1];
        }
    }
    if (num[0]=='\0') num[0] = '0';

    int i, flag = 1;
    if (strcmp(num, "NULL")!=0)
    {
        for (i=1; (rec->total)-i>=0; i++){
            if (strcmp(num, rec->data[(rec->total)-i].stunum)==0)
            {
                printf("Already Exists\n");
                flag = 0;
                break;
            }
        }
    }


    if (flag==1){
        strcpy(rec->data[rec->total].name, _name);
        strcpy(rec->data[rec->total].stunum, num);
        scanf("%s",rec->data[rec->total].email);
        scanf("%s",rec->data[rec->total].phone);
        printf("Added\n");
        rec->total++;
    }
    return;

}

int Search(Rec rec, char* str)
{
    if (strcmp(str, "NULL")==0)
        return -2;
    int b;
    while (str[0]=='0'){
        for (b=0; str[b]!='\0'; b++){
            str[b] = str[b+1];
        }
    }//delete front 0
    if (str[0]=='\0') str[0] = '0';

    int i;
    for (i=0; i<rec->total; i++)
    {
        if (strcmp(rec->data[i].stunum, str)==0)
            return i;
    }
    return -1;
}


void DELETE(Rec rec)// search stunum//not NULL
{
    char str[15];
    scanf("%s", str);

    if (Search(rec, str)==-2)
        return;
    else if (Search(rec, str)==-1){
        printf("Not Found\n");
        return;
    }

    int i = Search(rec, str), a;
    for (a=i; a<rec->total; a++){
        rec->data[a] = rec->data[a+1];
    }
    rec->total --;
    printf("Deleted\n");
    return;

}

void UPDATE(Rec rec)
{
    char sn[10] = {'\0'}, str[15] = {'\0'};
    scanf("%s",sn);
    scanf("%s",str);

    if (Search(rec, str)==-2)
        return;
    else if (Search(rec, str)==-1){
        printf("Not Found\n");
        return;
    }

    int i = Search(rec, str);
    strcpy(rec->data[i].name, sn);
    scanf("%s", rec->data[i].email);
    scanf("%s", rec->data[i].phone);

    printf("Updated\n");
    return;

}

void SORT(Rec rec)
{
    int i, j, m; Inform *temp = NULL;
    for (i=0; i<rec->total-1; i++){
        if (strcmp(rec->data[i].stunum, "NULL")==0)
                continue;

        for (j=i+1; j<rec->total; j++){
            if (strcmp(rec->data[j].stunum, "NULL")==0)
                continue;

            m = strlen(rec->data[j].stunum)
                - strlen(rec->data[i].stunum);

            if (m<0 || (m==0 &&
                strcmp(rec->data[j].stunum,
                       rec->data[i].stunum)<0))
            {
                *temp = rec->data[i];
                rec->data[i] = rec->data[j];
                rec->data[j] = *temp;
            }
        }
    }
    printf("Sorted\n");
    return;

}

void FIND(Rec rec)//find stunum
{
    char str[15];
    scanf("%s", str);

    if (Search(rec, str)==-2)
        return;
    else if (Search(rec, str)==-1){
        printf("Not Found\n");
        return;
    }

    int i = Search(rec, str);
    printf("%s %s %s %s\n",rec->data[i].name,
        rec->data[i].stunum, rec->data[i].email,
        rec->data[i].phone);
    return;

}

void PRINT(Rec rec)
{
    if (rec->total==0){
        printf("Empty\n");
        return;
    }

    printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
    int i;
    for (i=0; i<rec->total; i++)
    {
        printf("%8s %11s %15s %11s\n",
            rec->data[i].name, rec->data[i].stunum,
            rec->data[i].email, rec->data[i].phone);
    }
    return;
}

void _FREE(Rec rec)
{
    free(rec->data);
    rec->data = NULL;

    return;
}
