#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef struct telephone_book{
  char name[9];
  char stuID[15];
  char mail[16];
  char phonenum[12];
}telephone_book;
typedef struct Contact{
  telephone_book contact[1000];
  int count1;
}Contact,*pcontact;
void clear(pcontact con)
{
    con->count1=0;
    //con=calloc(1000,sizeof(telephone_book));
}
void add(pcontact con){
  scanf("%s %s %s %s",
        con->contact[con->count1].name,
        con->contact[con->count1].stuID,
        con->contact[con->count1].mail,
        con->contact[con->count1].phonenum);
  if(find(con,con->contact[con->count1].stuID)==-1
	 ||strcmp(con->contact[con->count1].stuID,"NULL")==0)
  {
    printf("Added\n");
    con->count1++;
  }
  else
    printf("Already Exists\n");
}
int pow1(int n)
{
    int x=1;
    for(int i=0;i<n;++i)
        x=x*10;
    return x;
}
long long change(char num[])
{
    long long x=0;
    int a;
    int n=0,b=0;
    for(int j=0;num[j]!='\0';++j)
        ++n;
    if(strcmp(num,"NULL")!=0)
    {
    for(a=0;a<n;++a)
    {
        if(num[a]!='0')
            break;
    }
    for(int i=n-1;i>=a;--i,++b)
        x+=pow1(b)*(num[i]-'0');
    }
    else
        x=99999999999;
    return x;
}
int find(pcontact con,char stuid[])
{
    int i;
    for(i=0;i<con->count1;++i)
    {
        if(change(stuid)==change(con->contact[i].stuID))
            return i;
    }
    return -1;
}
void delecontact(pcontact con)
{
    char stuid[15];
    int x=scanf("%s",stuid);
    int pos=0,i=0;
    if(x==0)
        return;
    pos=find(con,stuid);
    if(pos==-1)
    {
        printf("Not Found\n");
        return ;
    }
    for(i=pos;i<con->count1;i++)
        con->contact[i]=con->contact[i+1];
    con->count1--;
    printf("Deleted\n");
}
void update(pcontact con)
{
    char name[10],mail[20],phone[15];
    char stuid[15];
    scanf("%s %s %s %s",name,stuid,mail,phone);
    int pos;
    pos=find(con,stuid);
    if(pos==-1)
    {
        printf("Not Found\n");
        return ;
    }
    strcpy(con->contact[pos].name,name);
    strcpy(con->contact[pos].stuID,stuid);
    strcpy(con->contact[pos].mail,mail);
    strcpy(con->contact[pos].phonenum,phone);
    printf("Updated\n");
}
void sortcontact(pcontact con)
{
    telephone_book temp;
    for(int i=0;i<con->count1-1;++i)
    {
        for(int j=i+1;j<con->count1;++j)
        {
          if(change(con->contact[j].stuID)>(con->contact[j+1].stuID))
          {
            temp=con->contact[j];
            con->contact[j]=con->contact[j+1];
            con->contact[j+1]=temp;
          }
        }
    }
    printf("Sorted\n");
}
void print(pcontact con)
{
    int i=0;
    if(con->count1!=0)
       printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
    for(i=0;i<(con->count1);++i)
    {
        printf("%8s ",con->contact[i].name);
        printf("%11s ",con->contact[i].stuID);
        printf("%15s %11s\n",con->contact[i].mail,con->contact[i].phonenum);
    }
    return ;
}
int main()
{
    Contact con={0};
    clear(&con);
    char order[10];
    char stuid[11];
    while(1)
    {
        if(scanf("%s",order)==EOF)
            break;
        else if(strcmp(order,"ADD")==0)
            add(&con);
        else if(strcmp(order,"DELETE")==0)
            delecontact(&con);
        else if(strcmp(order,"UPDATE")==0)
            update(&con);
        else if(strcmp(order,"SORT")==0)
          sortcontact(&con);
        else if(strcmp(order,"FIND")==0)
        {
            scanf("%s",stuid);
            int i=find(&con,stuid);
            if(i==-1)
                printf("NOT found\n");
            else
                 printf("%s %lld %s %s\n",
               con.contact[i].name,
               change(con.contact[i].stuID),
               con.contact[i].mail,
               con.contact[i].phonenum);
        }
        else if(strcmp(order,"PRINT")==0)
            print(&con);
    }
    return 0;
}