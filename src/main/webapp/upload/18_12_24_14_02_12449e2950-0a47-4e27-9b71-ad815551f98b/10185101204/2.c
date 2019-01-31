#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct link
{
	char name[9];
	char num[12];
	char mail[16];
	char phone[12];
};

struct link ** INPUT()
{struct link **st;
st=(struct link **)malloc(sizeof(struct link)*300);
for(int i=0;i<300;i++)
st[i]=(struct link *)malloc(sizeof(struct link));
return st;}

int add(struct link** stu,int k)
{char a,m[12]={0},data[30];
a=getchar();
if(a=='N')
{strcpy(stu[k]->num,"NULL");
getchar();getchar();getchar();
return 1;}
for(int i=0;a=='0';i++)
a=getchar();
if(a==' ')
strcpy(m,"0");
for(int i=0;a!=' ';i++)
{m[i]=a;
a=getchar();}
for(int i=0;i<k;i++)
{if(strcmp(m,stu[i]->num)==0)
{gets(data);
printf("Already Exists\n");
return 0;}}
strcpy(stu[k]->num,m);
return 1;}

void del(struct link** stu,int k,int i)
{for(int j=i;j<k-1;j++)
{strcpy(stu[j]->name,stu[j+1]->name);
strcpy(stu[j]->num,stu[j+1]->num);
strcpy(stu[j]->mail,stu[j+1]->mail);
strcpy(stu[j]->mail,stu[j+1]->mail);}}

void scan(char* de)
{char a;
a=getchar();
for(int i=0;a=='0';i++)
a=getchar();
if(a=='\n'||a==' ')
strcpy(de,"0");
for(int i=0;a!=' '&&a!='\n';i++)
{de[i]=a;
a=getchar();}}

void print(struct link** stu,int k)
{printf("%8s %11s %15s %11s\n",stu[k]->name,stu[k]->num,stu[k]->mail,stu[k]->phone);}

int aaa(struct link** stu,char* de,int t,int* is,int p,int* no,int j)
{int w=1;
for(int i=0;i<t;i++)
{if(strcmp(de,stu[i]->num)==0)
{del(stu,t,i);
for(int l=0;l<p;l++)
{if(is[l]==i)
{bbb(p,j,is,no,l,i);
w=2;}}
printf("Deleted\n");
return w;}
else if(i==t-1)
printf("Not Found\n");}
return 0;}

void bbb(int p,int j,int *is,int *no,int l,int i)
{for(int x=l;x<p-1;x++)
is[l]=is[l+1];
for(int x=0;x<p-1;x++)
{if(is[x]>i)
is[x]--;}
for(int x=0;x<j;x++)
{if(no[x]>i)
no[x]--;}}

int main()
{struct link** stu;
stu=INPUT();
int is[300],no[300],j=0,p=0;
char ch[10]={0};
int t=0;
while(scanf("%s",ch)!=EOF)
{getchar();
if(strcmp(ch,"ADD")==0)
{char n[9]={0};
scanf("%s",n);
getchar();
if(add(stu,t)==1)
{strcpy(stu[t]->name,n);
scanf("%s %s",stu[t]->mail,stu[t]->phone);
printf("Added\n");
t++;}}
else if(strcmp(ch,"DELETE")==0)
{char de[12]={0};
int flag;
scan(de);
if(t==0)
printf("Not Found\n");
else {flag=aaa(stu,de,t,is,p,no,j);
if(flag==1) t--;
else if(flag==2)
{p--;t--;}}}
else if(strcmp(ch,"UPDATE")==0)
{char n[9]={0},de[12]={0},data[30];
scanf("%s",n);
getchar();
scan(de);
if(t==0)
printf("Not Found\n");
for(int i=0;i<t;i++)
{if(strcmp(de,stu[i]->num)==0)
{strcpy(stu[i]->name,n);
scanf("%s %s",stu[i]->mail,stu[i]->phone);
printf("Updated\n");
break;}
else if(i==t-1)
{printf("Not Found\n");
gets(data);}}}
else if(strcmp(ch,"SORT")==0)
{int q,flag=0;
j=0;p=0;
for(int i=0;i<t;i++)
{if(strcmp(stu[i]->num,"NULL")==0)
{no[j]=i;
j++;}
else
{is[p]=i;
p++;}}
for(int i=0;i<p-1;i++)
{for(int s=0;s<p-i-1;s++)
{int x=strlen(stu[is[s]]->num),y=strlen(stu[is[s+1]]->num);
if(x>y)
flag=1;
else if(x==y&&strcmp(stu[is[s]]->num,stu[is[s+1]]->num)==1)
flag=1;
if(flag==1)
{q=is[s];
is[s]=is[s+1];
is[s+1]=q;
flag=0;}}}
printf("Sorted\n");}
else if(strcmp(ch,"FIND")==0)
{char de[12]={0};
scan(de);
if(t==0)
printf("Not Found\n");
for(int i=0;i<t;i++)
{if(strcmp(de,stu[i]->num)==0)
{printf("%s %s %s %s\n",stu[i]->name,stu[i]->num,stu[i]->mail,stu[i]->phone);
break;}
else if(i==t-1)
printf("Not Found\n");}}
else if(strcmp(ch,"PRINT")==0)
{if(t==0)
printf("Empty\n");
else
{printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
for(int i=0;i<p;i++)
print(stu,is[i]);
for(int i=0;i<j;i++)
print(stu,no[i]);
for(int i=p+j;i<t;i++)
print(stu,i);}}}
for(int i=0;i<300;i++)
free(stu[i]);
free(stu);
return 0;}