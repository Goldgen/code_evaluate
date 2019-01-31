#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[9];
    char ID[12];
    char email[16];
    char phoneNum[12];
    long long ID_NUM;
};
typedef struct student student;

long long C2I(char ID[]){
    char minus = '0';
    long long num = 0;
    int i;
    for(i = 0; i < strlen(ID); i++){
        num += ID[i] - minus;
        num *= 10;
    }
    return num/10;
}

int ADD(student* pStu[],int Addcount){
    pStu[Addcount] = (student*)malloc(sizeof(student));
    scanf("%s",pStu[Addcount]->name);
    scanf("%s",pStu[Addcount]->ID);
    if(strcmp(pStu[Addcount]->ID,"NULL")==0)
        pStu[Addcount]->ID_NUM=99999999999+Addcount;
    else
        pStu[Addcount]->ID_NUM=C2I(pStu[Addcount]->ID);
    scanf("%s",pStu[Addcount]->email);
    scanf("%s",pStu[Addcount]->phoneNum);
    int i=0;
    for(;i<Addcount;i++){
        if(pStu[Addcount]->ID_NUM-pStu[i]->ID_NUM==0){
            printf("Already Exists\n");
            free(pStu[Addcount]);
            return 1;
        }
    }
    printf("Added\n");
    return 0;
}

int DELETE(int AddCount,student *pStu[]){
    int i=0;
    long long ID;
    scanf("%lld",&ID);
    for(;i<AddCount;i++){
        if(pStu[i]->ID_NUM==ID){
            pStu[AddCount] = (student*)malloc(sizeof(student));
            for(;i<AddCount;i++){
                *pStu[i]=*pStu[i+1];
            }
            free(pStu[AddCount]);
            printf("Deleted\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}


void  UPDATE(int Addcount,student* pStu[]){
    pStu[Addcount] = (student*)malloc(sizeof(student));
    scanf("%s",pStu[Addcount]->name);
    scanf("%s",pStu[Addcount]->ID);
    pStu[Addcount]->ID_NUM=C2I(pStu[Addcount]->ID);
    scanf("%s",pStu[Addcount]->email);
    scanf("%s",pStu[Addcount]->phoneNum);
    int i=0;
    for(;i<Addcount;i++){
        if(pStu[Addcount]->ID_NUM==pStu[i]->ID_NUM){
            strcpy(pStu[i]->name,pStu[Addcount]->name);
            strcpy(pStu[i]->email,pStu[Addcount]->email);
            strcpy(pStu[i]->phoneNum,pStu[Addcount]->phoneNum);
            pStu[i]->ID_NUM=pStu[Addcount]->ID_NUM;
            printf("Updated\n");
            free(pStu[Addcount]);
            return ;
        }
    }
    printf("Not Found\n");
    free(pStu[Addcount]);
    return ;
}

void FIND(int Addcount,student* pStu[]){
    int i=0;
    long long ID=0;
    scanf("%lld",&ID);
    for(;i<Addcount;i++){
        if(pStu[i]->ID_NUM==ID){
            printf("%s ",pStu[i]->name);
            printf("%lld ",pStu[i]->ID_NUM);
            printf("%s ",pStu[i]->email);
            printf("%s\n",pStu[i]->phoneNum);
            return ;
        }
    }
    printf("Not Found\n");
    return ;
}

void SORT(int Addcount,student *pStu[]){
    int i,j;
    student *tmp;
    for(i=0;i<Addcount;i++){
        for(j=0;j<Addcount-1-i;j++){
            if(pStu[j]->ID_NUM > pStu[j+1]->ID_NUM){
                tmp=pStu[j];
                pStu[j]=pStu[j+1];
                pStu[j+1]=tmp;
            }
        }
    }
    printf("Sorted\n");
    return ;
}

void PRINT(int AddCount,student* pStu[]){
    if(AddCount>0){
        int i=0;
        printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
        for(;i<AddCount;i++){
            printf("%8s ",pStu[i]->name);
            if(strcmp(pStu[i]->ID,"NULL")==0)
                printf("       NULL ");
            else
                printf("%11lld ",pStu[i]->ID_NUM);
            printf("%15s ",pStu[i]->email);
            printf("%11s\n",pStu[i]->phoneNum);
        }
        return ;
    }
    printf("Empty\n");
    return ;
}

int main()
{
    student* pStu[500];
    char control[10];
    int AddCount=0;
    int FREE_i=0;
    while(scanf("%s",control)!=EOF){
        if(strcmp(control,"ADD")==0){
            if(ADD(pStu,AddCount)==0)
                AddCount++;
                continue;
        }
        else if(strcmp(control,"DELETE")==0){
            if(DELETE(AddCount,pStu)==0)
                AddCount--;
                continue;
        }
        else if(strcmp(control,"UPDATE")==0){
            UPDATE(AddCount,pStu);
            continue;
        }
        else if(strcmp(control,"FIND")==0){
            FIND(AddCount,pStu);
            continue;
        }
        else if(strcmp(control,"SORT")==0){
            SORT(AddCount,pStu);
            continue;
        }
        PRINT(AddCount,pStu);
        }
    for(FREE_i=0;FREE_i<AddCount;FREE_i++)
            free(pStu[AddCount]);
    return 0;
}
