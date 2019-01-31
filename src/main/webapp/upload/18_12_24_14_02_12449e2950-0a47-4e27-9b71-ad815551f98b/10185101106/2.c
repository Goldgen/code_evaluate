#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stu
{
    char name[9];
    long long int number;
    char email[16];
    char phone[12];
};

long long int change(char *p)
{
    long long int n=0;
    if(strcmp(p,"NULL")==0)
        return -1;
    sscanf(p,"%lld",&n);
    return n;
}
int test(struct stu *p,long long int t,int n,int type)
{
    int i;
    if(t==-1)
        return 1-2*type;
    for(i=0;i<n;i++)
        if((p+i)->number==t)
            return i*type;
    return 1-2*type;
}

void Add(struct stu *p,int *n)
{
    char t[20];
    struct stu temp;
    scanf("%s %s %s %s",temp.name,t,temp.email,temp.phone);
    temp.number=change(t);
    if(test(p,temp.number,*n,0)==0)
        printf("Already Exists\n");
    else
    {
        *(p+*n)=temp;
        printf("Added\n");
        *n=*n+1;
    }
}



void sort_str(struct stu *p,int n)
{
    int i,j;
    struct stu x;
    for(i=n-2;i>=0;i--)
        for(j=i;j<n-1;j++)
            if(((p+j)->number==-1&&(p+j+1)->number!=-1)
               ||((p+j)->number!=-1&&(p+j+1)->number!=-1&&(p+j)->number>(p+j+1)->number))
            {
                x=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=x;
            }
    printf("Sorted\n");
}

void Update(struct stu *p,int n)
{
    struct stu t;
    scanf("%s %lld %s %s",t.name,&t.number,t.email,t.phone);
    int i=test(p,t.number,n,1);
    if(i==-1)
        printf("Not Found\n");
    else
    {
        *(p+i)=t;
        printf("Updated\n");
    }
}

void Delete(struct stu *p,int n,int *m)
{
    long long int number;
    scanf("%lld",&number);
    int i=test(p,number,n,1);
    if(i>=0)
    {
        (p+i)->number=-2;
        printf("Deleted\n");
        *m=1+*m;
    }
    else
        printf("Not Found\n");
}

void Find(struct stu *p,int n)
{
    long long int t;
    scanf("%lld",&t);
    int i=test(p,t,n,1);
    if(i==-1)
        printf("Not Found\n");
    else
        printf("%s %lld %s %s\n",(p+i)->name,(p+i)->number,(p+i)->email,(p+i)->phone);
}

void Print(int n,int m,struct stu *p)
{
    int i;
    if(n-m==0)
    {
        printf("Empty");
        return;
    }
    printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
    for(i=0;i<n;i++)
    {
        if((p+i)->number==-2)
            continue;
        printf("%8s ",(p+i)->name);
        if((p+i)->number==-1)
            printf("%11s %15s %11s\n","NULL",(p+i)->email,(p+i)->phone);
        else
            printf("%11lld %15s %11s\n",(p+i)->number,(p+i)->email,(p+i)->phone);
    }
}

int main()
{
    int n=0,m=0,nf=100;
    char cmd[10]={0};
    struct stu *p = 	NULL;
    p=(struct stu*)malloc(100*sizeof(struct stu));
    while((scanf("%s",cmd))!=EOF)
    {
        if(n==nf)
        {
            nf*=2;
            free(p);
            p=(struct stu*)malloc(nf*sizeof(struct stu));
        }
        if(strcmp(cmd,"ADD")==0)
            Add(p,&n);
        else if(strcmp(cmd,"DELETE")==0)
            Delete(p,n,&m);
        else if(strcmp(cmd,"UPDATE")==0)
            Update(p,n);
        else if(strcmp(cmd,"FIND")==0)
            Find(p,n);
        else if(strcmp(cmd,"SORT")==0)
            sort_str(p,n);
        else 
            Print(n,m,p);
    }
    free(p);
    return 0;
}
