#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLONG (~(unsigned long long)0/2)


typedef struct Person
{
    int state;
    char name[9];
    long long id;
    char mail[16];
    char tele[12];
}Person;
void add(Person *person,int max);
void delet(Person *person,int max);
void update(Person *person,int max);
void sort(Person *person,int max);
void find(Person *person,int max);
void print(Person *person,int max);
void swap(Person *p1,Person *p2);

int main()
{
    int max=10;
    Person person[max];
    char op[10];
    int i;

    for(i=0;i<max;i++)
        person[i].state=0;
    while(scanf("%s",op)!=EOF)
    {

        if(strcmp(op,"ADD")==0)
            add(person,max);
        if(strcmp(op,"DELETE")==0)
            delet(person,max);
        if(strcmp(op,"UPDATE")==0)
            update(person,max);
        if(strcmp(op,"SORT")==0)
            sort(person,max);
        if(strcmp(op,"FIND")==0)
            find(person,max);
        if(strcmp(op,"PRINT")==0)
            print(person,max);
    }
    return 0;
}

void add(Person *person,int max)
{
    char name[9];
    long long id;
    char mail[16];
    char tele[12];
    char test;
    char null[5];

    scanf("%s",name);
    getchar();
    test=getchar();
    {
        if(test=='N')
            {ungetc(test,stdin);
            id=MAXLONG;
            scanf("%s",null);}
        else
            {ungetc(test,stdin);
            scanf("%lld",&id);}
    }
    scanf("%s %s",mail,tele);

    int i;
    for(i=0;i<max;i++)
        {
            if(id!=MAXLONG&&id==person[i].id)
                {
                printf("Already Exists\n");
                return;
                }
        }
    for(i=0;i<max;i++)
    {
        if(person[i].state!=1)
        {
            person[i].state=1;
            strcpy(person[i].name,name);
            person[i].id=id;
            strcpy(person[i].mail,mail);
            strcpy(person[i].tele,tele);
            printf("Added\n");
            break;
        }
    }
}

void delet(Person *person,int max)
{
    long long id;
    long long i;

    scanf("%lld",&id);
    for(i=0;i<max;i++)
        {
            if(id==person[i].id)
            {
            person[i].state=-1;
            strcpy(person[i].name,"");
            person[i].id=0;
            strcpy(person[i].mail,"");
            strcpy(person[i].tele,"");
            printf("Deleted\n");
            return;
            }
        }
        printf("Not Found\n");
}

void update(Person *person,int max)
{
    char name[9];
    long long id;
    char mail[16];
    char tele[12];
    int i;

    scanf("%s %lld %s %s",name,&id,mail,tele);
    for(i=0;i<max;i++)
        {
            if(id==person[i].id)
                {
                strcpy(person[i].name,name);
                strcpy(person[i].mail,mail);
                strcpy(person[i].tele,tele);
                printf("Updated\n");
                return;
                }
        }
    printf("Not Found\n");
}

void sort(Person *person,int max)
{
    long long minId;
    int i;
    int k;
    int Flag;
    Person *p=person;

    for(i=0;i<max;i++)
    {
        if(person[i].state==-1) continue;

        k=i;
        Flag=k;
        minId=person[Flag].id;

        while(k<max)
        {   if(person[k].state==-1) continue;
            if(person[k].id<minId)
            {
                minId=person[k].id;
                Flag=k;
            }
            k++;
        }
        swap(p+i,p+Flag);
        k=i+1;
    }
    printf("Sorted\n");
}

void find(Person *person,int max)
{
    int i;
    long long id;

    scanf("%lld",&id);
    for(i=0;i<max;i++)
    {
        if(id==person[i].id)
        {
            printf("%s %lld %s %s\n",person[i].name,person[i].id,
                   person[i].mail,person[i].tele);
            return;
        }
    }
    printf("Not Found\n");
}

void print(Person *person,int max)
{
    int i;
    int exsist=0;

    for(i=0;i<max;i++)
    {
        if(person[i].state==1)
            {
                printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
                exsist=1;
                break;
            }
    }
    if(exsist==0) printf("Empty\n");
    for(i=0;i<max;i++)
    {
        if(person[i].state==1)
        {
            if(person[i].id==MAXLONG) printf("%8s        NULL %15s %11s\n",
                                             person[i].name,
                                        person[i].mail,person[i].tele);
            else printf("%8s %11lld %15s %11s\n",person[i].name,person[i].id,
                   person[i].mail,person[i].tele);
        }
    }
}

void swap(Person *p1,Person *p2)
{
    Person temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
