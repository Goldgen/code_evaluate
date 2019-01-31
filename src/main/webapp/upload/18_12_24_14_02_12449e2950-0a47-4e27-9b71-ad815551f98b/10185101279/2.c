#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
typedef struct
    {
        char name[10];
        long long int number;
        char email[20];
        char phone[15] ;
    }information;
int search(information data[],long long int n,int count);
long long int trans(char arr[],int n);
int main()
{

    char op[10];

    int count=0;

    information student[100];

    while(scanf("%s",op)>0){
        if(strcmp(op,"ADD")==0)
        {
            char temp[13];
            int x;
            scanf("%s",student[count].name);
            scanf("%s",temp);
            if(strcmp(temp,"NULL")==0){
                student[count].number=-1;
                x=-2;}
            else{
                student[count].number=trans(temp,strlen(temp));
                 x=search(student,student[count].number,count);
                }
            scanf("%s",student[count].email);
            scanf("%s",student[count].phone);

            if(x==-2){
            printf("Added\n");
            count++;
            }
            else
                printf("Already Exists\n");

            }
        if(strcmp(op,"DELETE")==0)
        {   long long int n;
            scanf("%lld",&n);
            int x=search(student,n,count);
            if(x==-2)
                printf("Not Found\n");
            else
            {
                for(int k=x;k<count-1;k++)
                    student[k]=student[k+1];
                count--;
                printf("Deleted\n");
            }
        }
        if(strcmp(op,"SORT")==0)
        {
            information temp;
            int j=count-1;

            for(int i=j;i>=0;i--){
                if(student[i].number==-1)
                   {
                       temp=student[j];
                       student[j]=student[i];
                       student[i]=temp;
                       j--;
                   }
            }

            for(int i=0;i<j;i++)
            {
                for(int k=i+1;k<=j;k++)
                    if(student[i].number>student[k].number)
                {
                    temp=student[i];
                    student[i]=student[k];
                    student[k]=temp;
                }
            }
            printf("Sorted\n");
        }
        if(strcmp(op,"UPDATE")==0)
        {
            information t;
            int x;
            scanf("%s",t.name);
            scanf("%lld",&t.number);
            scanf("%s",t.email);
            scanf("%s",t.phone);
            x=search(student,t.number,count);
            if(x==-2)
                printf("Not Found\n");
            else
            {
                student[x]=t;
                printf("Updated\n");
            }
            }
        if(strcmp(op,"FIND")==0)
        {
            long long int n;
            scanf("%lld",&n);
            int x=search(student,n,count);
            if(x==-2)
                printf("Not Found\n");
            else
            {
                printf("%s %lld %s %s\n",student[x].name,student[x].number,student[x].email,student[x].phone);
            }
        }
        if(strcmp(op,"PRINT")==0)
        {
            if(count==0)
            printf("Empty\n");
            else{
                printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
                for(int i=0;i<count;i++){
                        if(student[i].number!=-1)
                    printf("%8s %11lld %15s %11s\n",student[i].name,student[i].number,student[i].email,student[i].phone);
                else
                      printf("%8s %11s %15s %11s\n",student[i].name,"NULL",student[i].email,student[i].phone);
                    }
            }

        }

    }


return 0;
}
int search(information data[],long long int n,int count){
   int i;
   for(i=0;i<count;i++)
    if(data[i].number==n)
    return i;

return -2;
}
long long int trans(char arr[],int n){
    long long int x=0;
    long long int w=1;
    for(int i=n-1;i>=0;i--)
    {
        x+=(arr[i]-'0')*w;
        w*=10;
    }
    return x;

}
