#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct phonenote
{
    char Name[30],email[30],phone[30];
    long long int id;
}phonenote;
phonenote people[5000010];

int n,m,num;
char s[50];

long long int calc(char *s)
{
    int i,n=strlen(s);
    long long int ans=0;
    for (i=0;i<n;i++)
        ans=ans*10+s[i]-'0';
    return ans;
}

int Find(long long int x)
{
    int i;
    if (x==-1) return -1;
    for (i=1;i<=num;i++)
        if (people[i].id==x) return i;
    return -2;
}

int cmp(const void *p1,const void *p2)
{
    phonenote *x=(phonenote*)p1;
    phonenote *y=(phonenote*)p2;
    if (y->id==-2) return -1;
    if (x->id==-2) return 1;
    if (y->id==-1) return -1;
    if (x->id==-1) return 1;
    if (x->id>y->id) return 1;else return -1;
}

int main()
{
    num=0;
    while(~scanf("%s",s))
    {
        if (s[0]=='A')
        {
            ++num;
            scanf("%s %s %s %s",people[num].Name,s,people[num].email,people[num].phone);
            if (s[0]=='N') people[num].id=-1;
            else people[num].id=calc(s);
            int y=Find(people[num].id);
            if (y<num&&y!=-1) num--,puts("Already Exists");else puts("Added");
        }
        else if (s[0]=='D')
        {
            long long int x;
            scanf("%lld",&x);
            int y=Find(x);
            if (y>0)
            {
                people[y].id=-2;
                puts("Deleted");
            }else puts("Not Found");
        }
        else if (s[0]=='U')
        {
            num++;
            scanf("%s %lld %s %s",people[num].Name,&people[num].id,people[num].email,people[num].phone);
            int y=Find(people[num].id);
            if (y==num) puts("Not Found");
            else
            {
                strcpy(people[y].email,people[num].email);
                strcpy(people[y].Name,people[num].Name);
                strcpy(people[y].phone,people[num].phone);
                puts("Updated");
            }
            num--;
        }
        else if (s[0]=='S')
        {
            puts("Sorted");
            qsort(people+1,num,sizeof(people[0]),cmp);
        }
        else if (s[0]=='F')
        {
            long long int x;
            scanf("%lld",&x);
            int y=Find(x);
            if (y>0)
            {
                printf("%s %lld %s %s\n",people[y].Name,people[y].id,people[y].email,people[y].phone);
            }
            else puts("Not Found");
        }
        else if (s[0]=='P')
        {
            printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
            int i;
            for (i=1;i<=num;i++)
                if (people[i].id==-2) break;
                else if (people[i].id==-1) printf("%8s        NULL%16s%12s\n",people[i].Name,people[i].email,people[i].phone);
                    else printf("%8s%12lld%16s%12s\n",people[i].Name,people[i].id,people[i].email,people[i].phone);
        }
    }
    return 0;
}
