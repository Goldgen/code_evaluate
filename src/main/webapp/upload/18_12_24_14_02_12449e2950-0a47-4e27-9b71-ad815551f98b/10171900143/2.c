#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLOCK 20


typedef struct
{
    char name[30];
    char number[30];
    char email[30];
    char phone[30];
} Info;

typedef struct
{
    Info *Info;
    int len;
} List;

void swap(Info*pi,Info*pj)
{
    Info a=*pi;
    *pi=*pj;
    *pj=a;
}
void Add(List* pa,char*name,char*number,char*email,char*phone)
{
    int len=pa->len;
    int j=-1;
    for(int i=0; i<len; i++)
    {
        int a=strcmp(pa->Info[i].number,"NULL");//1：不是NULL
        int b=strcmp(pa->Info[i].number,number);//1：不是number 0：是number
        int c=strcmp(pa->Info[i].name,"#");//1：不是#
        if(a&&b==0)
        {
            printf("Already Exists\n");
            break;
        }
        else if(c==0)
        {
            j=i;
            break;
        }
    }
    if(j>=0)
    {
        if(j==len)
            pa->Info=(Info*)realloc(pa->Info,len+BLOCK);

            strcpy(pa->Info[j].name,name);
            strcpy(pa->Info[j].email,email);
            strcpy(pa->Info[j].phone,phone);
            strcpy(pa->Info[j].number,number);
        if(j==len){
            for(int i=len+1; i<len+BLOCK; i++)
            {
                strcpy(pa->Info[i].email,"#");
                strcpy(pa->Info[i].name,"#");
                strcpy(pa->Info[i].number,"#");
                strcpy(pa->Info[i].phone,"#");
            }
            len=pa->len=len+BLOCK;
        }
            printf("Added\n");
    }
}
void Delete(List *pa,char *number)
{
    int len=pa->len;
    int ret=0;
    for(int i=0; i<len; i++)
    {
        int a=strcmp(pa->Info[i].number,"NULL");//1：不是NULL
        int b=strcmp(pa->Info[i].number,number);//1：不是number 0：是number
        int c=strcmp(pa->Info[i].name,"#");//1：不是#
        if(a&&b==0)
        {
            strcpy(pa->Info[i].email,"#");
            strcpy(pa->Info[i].name,"#");
            strcpy(pa->Info[i].number,"#");
            strcpy(pa->Info[i].phone,"#");
            ret=1;
            printf("Deleted\n");
            if(i<len-2){
                for(int j=i+2;j<len;j++){
                    if(strcmp(pa->Info[j].name,"#")==0)
                        {swap(&pa->Info[i],&pa->Info[j-1]);break;}
                }
            }
            else if(i==len-2){
                swap(&pa->Info[i],&pa->Info[i+1]);
            }
            break;
        }
        else if(c==0)
            break;
    }
    if(ret==0)
        printf("Not Found\n");
}

void Update(List* pa,char *name,char*number,char*email,char*phone)
{
    int len=pa->len;
    int ret=0;
    for(int i=0; i<len; i++)
    {
        int a=strcmp(pa->Info[i].number,"NULL");//1：不是NULL
        int b=strcmp(pa->Info[i].number,number);//1：不是number 0：是number
        int c=strcmp(pa->Info[i].name,"#");//1：不是#
        if(a&&b==0)
        {
            strcpy(pa->Info[i].name,name);
            strcpy(pa->Info[i].email,email);
            strcpy(pa->Info[i].phone,phone);
            ret=1;
            printf("Updated\n");
            break;
        }
        if(c==0)break;
    }
    if(ret==0)
        printf("Not Found\n");
}



void Sort(List*pa)
{
    int len=pa->len;
    char *I;
    char *J;
    unsigned long long pi,pj;
    for(int i=0;i<len;i++){
        if(strcmp(pa->Info[i].name,"#")==0)
            {
                len=i;break;
                }
    }
    for(int cnt=len; cnt>=2; cnt--)
    {
        for(int i=0;i<cnt-1;i++)
        {
            int j=i+1;
            I=pa->Info[i].number;
            J=pa->Info[j].number;

            pi=strtoull(I,0,10);
            pj=strtoull(J,0,10);
            int a=(pi>pj)&&strcmp(I,"NULL")&&strcmp(J,"NULL");
            int b=(strcmp(I,"NULL")==0)&&strcmp(J,"NULL");
            if(a||b)
                    swap(&pa->Info[i],&pa->Info[j]);
        }
    }
    printf("Sorted\n");
}



void Find(List *pa,char*number){
    int len=pa->len;
    int ret=0;int b,c;
    for(int i=0; i<len; i++)
    {
        b=strcmp(pa->Info[i].number,number);
        c=strcmp(pa->Info[i].name,"#");//1：不是#
        if(b==0)
        {
            printf("%s %s %s %s\n",
                   pa->Info[i].name,
                   pa->Info[i].number,
                   pa->Info[i].email,
                   pa->Info[i].phone);
            ret=1;break;
        }
        if(c==0)break;
    }
    if(ret==0)
        printf("Not Found\n");
}

void Print(List*pa)
{
    int len=pa->len;
    int c;
    c=strcmp(pa->Info[0].name,"#");
    if(c==0)
        printf("Empty\n");

    else{
        printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
        for(int i=0; i<len; i++)
        {
            c=strcmp(pa->Info[i].name,"#");
            if(c)
                printf("%8s %11s %15s %11s\n",
                       pa->Info[i].name,
                       pa->Info[i].number,
                       pa->Info[i].email,
                       pa->Info[i].phone);
            else break;
        }
    }
}

void formula(char*number){
    unsigned long long num;
    if(strcmp(number,"NULL")){
                num=(unsigned long long)strtoull(number,0,10);
                sprintf(number,"%llu",num);
        }
}

int main()
{
    char name[30];
    char email[30];
    char phone[30];
    char number[30];
    char cmd[30];
    List a;
    a.len=50;
    a.Info=calloc(a.len,sizeof(Info));
    for(int i=0; i<a.len; i++)
    {
        strcpy(a.Info[i].email,"#");
        strcpy(a.Info[i].name,"#");
        strcpy(a.Info[i].number,"#");
        strcpy(a.Info[i].phone,"#");
    }
    for(;;)
    {
        if(scanf("%s",cmd)==EOF)
            break;
        if(strcmp(cmd,"ADD")==0)
        {
            scanf("%s %s %s %s",name,number,email,phone);
            formula(number);
            Add(&a,name,number,email,phone);
        }
        else if(strcmp(cmd,"DELETE")==0)
        {
            scanf("%s",number);
            formula(number);
            Delete(&a,number);
        }
        else if(strcmp(cmd,"UPDATE")==0)
        {
            scanf("%s %s %s %s",name,number,email,phone);
            formula(number);
            Update(&a,name,number,email,phone);
        }
        else if(strcmp(cmd,"SORT")==0)
        {
            Sort(&a);
        }
        else if(strcmp(cmd,"FIND")==0)
            {
                scanf("%s",number);
                formula(number);
                Find(&a,number);
                }
        else if(strcmp(cmd,"PRINT")==0)
            Print(&a);

    }
    return 0;
}
