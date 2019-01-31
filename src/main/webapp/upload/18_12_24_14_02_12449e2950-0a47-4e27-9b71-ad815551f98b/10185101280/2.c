#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 99999999999

struct student
{
    char name[9];
    char ID[12];
    char email[16];
    char phone[12];
    long long id;
};
struct student stu[1000];
int n=0;int flag;
char Nname[9]={'\0'},NID[12]={'\0'},Nemail[16]={'\0'},Nphone[12]={'\0'};
long long Nid;

void swap(char *a,char *b)
{
    char temp[30]={'\0'};
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}
void add()
{
    flag=0;
    scanf("%s %s %s %s",stu[n].name,stu[n].ID,stu[n].email,stu[n].phone);
    if(strcmp(stu[n].ID,"NULL")==0)
        stu[n].id=max;
    else
         stu[n].id=atoll(stu[n].ID);
    for(int i=0;i<n;i++)
    {
        if(strcmp(stu[n].ID,"NULL")!=0&&stu[n].id==stu[i].id)
        flag=1;
    }
    if(flag)
        printf("Already Exists\n");
    else
    {
        printf("Added\n");
        n++;
    }
}

void delet()
{
    flag=0;
    int j;
    scanf("%s",NID);
    Nid=atoll(NID);
    for(j=0;j<n;j++)
    {
        if(Nid==stu[j].id)
        {
            for(;j<n-1;j++)
            {
                strcpy(stu[j].name,stu[j+1].name);
                strcpy(stu[j].ID,stu[j+1].ID);
                strcpy(stu[j].email,stu[j+1].email);
                strcpy(stu[j].phone,stu[j+1].phone);
                stu[j].id=stu[j+1].id;
            }
            flag=1;
            n--;
            break;
        }
    }
    if(flag)
        printf("Deleted\n");
    else
        printf("Not Found\n");
}
void update()
{
    flag=0;
    scanf("%s %s %s %s",Nname,NID,Nemail,Nphone);
    Nid=atoll(NID);
    for (int i=0;i<n; i++)
    {
         if(Nid==stu[i].id)
         {
             strcpy(stu[i].name,Nname);
             strcpy(stu[i].ID,NID);
             strcpy(stu[i].email,Nemail);
             strcpy(stu[i].phone,Nphone);
             stu[i].id=Nid;
             flag=1;
             break;
        }

    }
    if(flag)
        printf("Updated\n");
    else
        printf("Not Found\n");
}
void sort()
{
    long long temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)

        {
            if(stu[j].id>stu[j+1].id)
            {
                temp = stu[j].id;
                stu[j].id=stu[j + 1].id;
                stu[j + 1].id = temp;
                swap(stu[j].name,stu[j+1].name);
                swap(stu[j].ID,stu[j+1].ID);
                swap(stu[j].email,stu[j+1].email);
                swap(stu[j].phone,stu[j+1].phone);
            }
        }

    }
    printf("Sorted\n");

}
void find()
{
    flag=0;
    scanf("%s",NID);
    Nid=atoll(NID);
    for(int i=0;i<n;i++)
    {
        if(stu[i].id==Nid)
        {
            printf("%s %lld %s %s\n",stu[i].name,stu[i].id,stu[i].email,stu[i].phone);
            flag=1;
        }
    }
    if(!flag)
        printf("Not Found\n");

}
void print()
{
    if(n==0)
    {
        printf("Empty\n");

    }

    else
    {
        printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
        for(int i=0;i<n;i++)
        {
            if(stu[i].id==max)
                printf("%8s %11s %15s %11s\n",stu[i].name,"NULL",stu[i].email,stu[i].phone);
            else
                printf("%8s %11lld %15s %11s\n",stu[i].name,stu[i].id,stu[i].email,stu[i].phone);
        }
    }
 }
int main()
{
    char select[15];
    while(scanf("%s",select)!=EOF)
    {
        switch(select[0])
        {
            case 'A':add(); break;
            case 'D':delet(); break;
            case 'U':update(); break;
            case 'S':sort(); break;
            case 'F':find(); break;
            case 'P':print(); break;
            default:break;
        }
    }
    return 0;
}